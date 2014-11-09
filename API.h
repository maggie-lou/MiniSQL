#ifndef _API_H
#define _API_H

#include <string>
#include <vector>
#include "global.h"
#include "filter.h"
#include "CatalogManager.h"

class API {
public:
    Response createIndex(const std::string &indexName, const std::string &tableName, const std::string &AttrName);
    Response dropIndex(const std::string &indexName);
    Response createTable(const std::string &tableName, std::vector<AttrType> &data, int pk);
    Response dropTable(const std::string &tableName);
    Response Select(const std::string &tableName, const Filter &filter);
    Response Delete(const std::string &tableName, const Filter &filter);
    Response Insert(const std::string &tableName, const vector<element> entry);
private:
    CatalogManager cm;
};

#endif