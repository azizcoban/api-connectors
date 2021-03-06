/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "RiskLimitRes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RiskLimitRes::RiskLimitRes()
{
    m_PositionIsSet = false;
    m_RiskIsSet = false;
}

RiskLimitRes::~RiskLimitRes()
{
}

void RiskLimitRes::validate()
{
    // TODO: implement validation
}

web::json::value RiskLimitRes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PositionIsSet)
    {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(m_Position);
    }
    if(m_RiskIsSet)
    {
        val[utility::conversions::to_string_t("risk")] = ModelBase::toJson(m_Risk);
    }

    return val;
}

void RiskLimitRes::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("position")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("position")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setPosition( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("risk")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setRisk( newItem );
        }
    }
}

void RiskLimitRes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_PositionIsSet)
    {
        if (m_Position.get())
        {
            m_Position->toMultipart(multipart, utility::conversions::to_string_t("position."));
        }
        
    }
    if(m_RiskIsSet)
    {
        if (m_Risk.get())
        {
            m_Risk->toMultipart(multipart, utility::conversions::to_string_t("risk."));
        }
        
    }
}

void RiskLimitRes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("position")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("position")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("position."));
            setPosition( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("risk")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("risk")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("risk."));
            setRisk( newItem );
        }
    }
}

std::shared_ptr<Object> RiskLimitRes::getPosition() const
{
    return m_Position;
}


void RiskLimitRes::setPosition(std::shared_ptr<Object> value)
{
    m_Position = value;
    m_PositionIsSet = true;
}
bool RiskLimitRes::positionIsSet() const
{
    return m_PositionIsSet;
}

void RiskLimitRes::unsetPosition()
{
    m_PositionIsSet = false;
}

std::shared_ptr<Object> RiskLimitRes::getRisk() const
{
    return m_Risk;
}


void RiskLimitRes::setRisk(std::shared_ptr<Object> value)
{
    m_Risk = value;
    m_RiskIsSet = true;
}
bool RiskLimitRes::riskIsSet() const
{
    return m_RiskIsSet;
}

void RiskLimitRes::unsetRisk()
{
    m_RiskIsSet = false;
}

}
}
}
}

