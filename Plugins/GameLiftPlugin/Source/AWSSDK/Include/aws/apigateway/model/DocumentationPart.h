﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/DocumentationPartLocation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A documentation part for a targeted API entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationPart">AWS
   * API Reference</a></p>
   */
  class DocumentationPart
  {
  public:
    AWS_APIGATEWAY_API DocumentationPart();
    AWS_APIGATEWAY_API DocumentationPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API DocumentationPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline DocumentationPart& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline DocumentationPart& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The DocumentationPart identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline DocumentationPart& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline const DocumentationPartLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline void SetLocation(const DocumentationPartLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline void SetLocation(DocumentationPartLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline DocumentationPart& WithLocation(const DocumentationPartLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline DocumentationPart& WithLocation(DocumentationPartLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline DocumentationPart& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline DocumentationPart& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only OpenAPI-compliant
     * documentation-related fields from the properties map are exported and, hence,
     * published as part of the API entity definitions, while the original
     * documentation parts are exported in a OpenAPI extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline DocumentationPart& WithProperties(const char* value) { SetProperties(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline DocumentationPart& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DocumentationPart& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DocumentationPart& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DocumentationPartLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
