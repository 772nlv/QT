#include "sqliteoperator.h"
#include <QCoreApplication>
// 构造函数中初始化数据库对象，并建立数据库
SqliteOperator::SqliteOperator()
{
    //程序使用的数据库文件是和应用文件一个目录的，可以设置为：

    //检查是否已存在名为"qt_sql_default_connection"的数据库连接。
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        //
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        // 建立和SQlite数据库的连接,指定类型为Sqlite
        database = QSqlDatabase::addDatabase("QSQLITE");
        // 设置数据库文件的名字
        database.setDatabaseName("MyDataBase.db");

    }
}

//打开数据库
void SqliteOperator::open_db()
{
    if (!database.open())
    {
       qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else
    {
        qDebug()<<"connect Sqlite success"<<database.databaseName();
       // do something
    }
}

//创建数据表
void SqliteOperator::creat_table()
{
    QSqlQuery query;
    query.prepare("CREATE TABLE Users(nameID TEXT,passwd TEXt,tel TEXT)");

    if(!query.exec())
    {
        qDebug() << "Error: Fail to create table. " << query.lastError();

    }
    else
    {
        qDebug() << "table created!";
    }
}

//关闭数据库
void SqliteOperator::close_database()
{
    database.close();
}

//判断某个数据表是否存在
bool SqliteOperator::isTableExist(QString &tableName)
{
    QSqlDatabase database = QSqlDatabase::database();
    if(database.tables().contains(tableName))
    {
        return true;
    }
    return false;
}

//数据库通用函数
void SqliteOperator::normalFunc(QString Sql)
{
    QSqlQuery query;
    query.prepare(Sql);
    if(!query.exec())
    {
        qDebug() << "Error: Fail to work. " << query.lastError();

    }
    else
    {
        qDebug() << "succese!";
    }

}

//数据库查询函数
void SqliteOperator::normalSearch(QString Sql, QSqlQuery & query)
{
    query.prepare(Sql);
    if(!query.exec())
    {
        qDebug() << "Error: Fail to work. " << query.lastError();

    }
    else
    {
        qDebug() << "succese!";
    }
}

