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

#include "OAIInline_response_400.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace RespExtServer {

OAIInline_response_400::OAIInline_response_400(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInline_response_400::OAIInline_response_400() {
    this->initializeModel();
}

OAIInline_response_400::~OAIInline_response_400() {}

void OAIInline_response_400::initializeModel() {

    m_error_isSet = false;
    m_error_isValid = false;
}

void OAIInline_response_400::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInline_response_400::fromJsonObject(QJsonObject json) {

    m_error_isValid = ::RespExtServer::fromJsonValue(error, json[QString("error")]);
    m_error_isSet = !json[QString("error")].isNull() && m_error_isValid;
}

QString OAIInline_response_400::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInline_response_400::asJsonObject() const {
    QJsonObject obj;
    if (m_error_isSet) {
        obj.insert(QString("error"), ::RespExtServer::toJsonValue(error));
    }
    return obj;
}

QString OAIInline_response_400::getError() const {
    return error;
}
void OAIInline_response_400::setError(const QString &error) {
    this->error = error;
    this->m_error_isSet = true;
}

bool OAIInline_response_400::is_error_Set() const{
    return m_error_isSet;
}

bool OAIInline_response_400::is_error_Valid() const{
    return m_error_isValid;
}

bool OAIInline_response_400::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_error_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInline_response_400::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace RespExtServer
