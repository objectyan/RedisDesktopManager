/**
 * RESP.app Extension server
 * RESP.app Extension Server API allows you to extend RESP.app with your custom data formatters
 *
 * The version of the OpenAPI document: 2022.0-preview1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIDataFormatter.h
 *
 * 
 */

#ifndef OAIDataFormatter_H
#define OAIDataFormatter_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace RespExtServer {

class OAIDataFormatter : public OAIObject {
public:
    OAIDataFormatter();
    OAIDataFormatter(QString json);
    ~OAIDataFormatter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getKeyTypes() const;
    void setKeyTypes(const QString &key_types);
    bool is_key_types_Set() const;
    bool is_key_types_Valid() const;

    QString getMagicHeader() const;
    void setMagicHeader(const QString &magic_header);
    bool is_magic_header_Set() const;
    bool is_magic_header_Valid() const;

    bool isReadOnly() const;
    void setReadOnly(const bool &read_only);
    bool is_read_only_Set() const;
    bool is_read_only_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString key_types;
    bool m_key_types_isSet;
    bool m_key_types_isValid;

    QString magic_header;
    bool m_magic_header_isSet;
    bool m_magic_header_isValid;

    bool read_only;
    bool m_read_only_isSet;
    bool m_read_only_isValid;
};

} // namespace RespExtServer

Q_DECLARE_METATYPE(RespExtServer::OAIDataFormatter)

#endif // OAIDataFormatter_H