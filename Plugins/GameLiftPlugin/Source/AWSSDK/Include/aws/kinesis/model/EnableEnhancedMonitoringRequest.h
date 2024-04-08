﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/MetricsName.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <a>EnableEnhancedMonitoring</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/EnableEnhancedMonitoringInput">AWS
   * API Reference</a></p>
   */
  class EnableEnhancedMonitoringRequest : public KinesisRequest
  {
  public:
    AWS_KINESIS_API EnableEnhancedMonitoringRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableEnhancedMonitoring"; }

    AWS_KINESIS_API Aws::String SerializePayload() const override;

    AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream for which to enable enhanced monitoring.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline const Aws::Vector<MetricsName>& GetShardLevelMetrics() const{ return m_shardLevelMetrics; }

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline bool ShardLevelMetricsHasBeenSet() const { return m_shardLevelMetricsHasBeenSet; }

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline void SetShardLevelMetrics(const Aws::Vector<MetricsName>& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics = value; }

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline void SetShardLevelMetrics(Aws::Vector<MetricsName>&& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics = std::move(value); }

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithShardLevelMetrics(const Aws::Vector<MetricsName>& value) { SetShardLevelMetrics(value); return *this;}

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithShardLevelMetrics(Aws::Vector<MetricsName>&& value) { SetShardLevelMetrics(std::move(value)); return *this;}

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline EnableEnhancedMonitoringRequest& AddShardLevelMetrics(const MetricsName& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics.push_back(value); return *this; }

    /**
     * <p>List of shard-level metrics to enable.</p> <p>The following are the valid
     * shard-level metrics. The value "<code>ALL</code>" enables every metric.</p> <ul>
     * <li> <p> <code>IncomingBytes</code> </p> </li> <li> <p>
     * <code>IncomingRecords</code> </p> </li> <li> <p> <code>OutgoingBytes</code> </p>
     * </li> <li> <p> <code>OutgoingRecords</code> </p> </li> <li> <p>
     * <code>WriteProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>ReadProvisionedThroughputExceeded</code> </p> </li> <li> <p>
     * <code>IteratorAgeMilliseconds</code> </p> </li> <li> <p> <code>ALL</code> </p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Data Streams Service with Amazon CloudWatch</a> in the
     * <i>Amazon Kinesis Data Streams Developer Guide</i>.</p>
     */
    inline EnableEnhancedMonitoringRequest& AddShardLevelMetrics(MetricsName&& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the stream.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stream.</p>
     */
    inline EnableEnhancedMonitoringRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::Vector<MetricsName> m_shardLevelMetrics;
    bool m_shardLevelMetricsHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
