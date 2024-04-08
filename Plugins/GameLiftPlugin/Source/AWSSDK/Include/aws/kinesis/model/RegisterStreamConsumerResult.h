﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/Consumer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Kinesis
{
namespace Model
{
  class RegisterStreamConsumerResult
  {
  public:
    AWS_KINESIS_API RegisterStreamConsumerResult();
    AWS_KINESIS_API RegisterStreamConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API RegisterStreamConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that represents the details of the consumer you registered. When
     * you register a consumer, it gets an ARN that is generated by Kinesis Data
     * Streams.</p>
     */
    inline const Consumer& GetConsumer() const{ return m_consumer; }

    /**
     * <p>An object that represents the details of the consumer you registered. When
     * you register a consumer, it gets an ARN that is generated by Kinesis Data
     * Streams.</p>
     */
    inline void SetConsumer(const Consumer& value) { m_consumer = value; }

    /**
     * <p>An object that represents the details of the consumer you registered. When
     * you register a consumer, it gets an ARN that is generated by Kinesis Data
     * Streams.</p>
     */
    inline void SetConsumer(Consumer&& value) { m_consumer = std::move(value); }

    /**
     * <p>An object that represents the details of the consumer you registered. When
     * you register a consumer, it gets an ARN that is generated by Kinesis Data
     * Streams.</p>
     */
    inline RegisterStreamConsumerResult& WithConsumer(const Consumer& value) { SetConsumer(value); return *this;}

    /**
     * <p>An object that represents the details of the consumer you registered. When
     * you register a consumer, it gets an ARN that is generated by Kinesis Data
     * Streams.</p>
     */
    inline RegisterStreamConsumerResult& WithConsumer(Consumer&& value) { SetConsumer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegisterStreamConsumerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegisterStreamConsumerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegisterStreamConsumerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Consumer m_consumer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
