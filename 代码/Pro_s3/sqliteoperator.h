#ifndef SQLITEOPERATOR_H
#define SQLITEOPERATOR_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class SqliteOperator
{
public:
    SqliteOperator();
    //构建的时候创建(连接)数据库
    //打开数据库
    void open_db();
    //创建数据表
    void creat_table();
    //关闭数据库
    void close_database();
    // 判断数据表是否存在
    bool isTableExist(QString& tableName);
    //增加、删除、修改通用数据库函数
    void normalFunc(QString Sql);
    //查询 数据库函数
    void normalSearch(QString Sql,QSqlQuery &query);

private:
    //数据库
    QSqlDatabase database;
};

#endif // SQLITEOPERATOR_H
