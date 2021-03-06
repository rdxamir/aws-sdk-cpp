/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/model/MetricsName.h>

namespace Aws
{
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

  /**
   * <p>Represents enhanced metrics types.</p>
   */
  class AWS_KINESIS_API EnhancedMetrics
  {
  public:
    EnhancedMetrics();
    EnhancedMetrics(const Aws::Utils::Json::JsonValue& jsonValue);
    EnhancedMetrics& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline const Aws::Vector<MetricsName>& GetShardLevelMetrics() const{ return m_shardLevelMetrics; }

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline void SetShardLevelMetrics(const Aws::Vector<MetricsName>& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics = value; }

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline void SetShardLevelMetrics(Aws::Vector<MetricsName>&& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics = value; }

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline EnhancedMetrics& WithShardLevelMetrics(const Aws::Vector<MetricsName>& value) { SetShardLevelMetrics(value); return *this;}

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline EnhancedMetrics& WithShardLevelMetrics(Aws::Vector<MetricsName>&& value) { SetShardLevelMetrics(value); return *this;}

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline EnhancedMetrics& AddShardLevelMetrics(const MetricsName& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics.push_back(value); return *this; }

    /**
     * <p>List of shard-level metrics.</p> <p>The following are the valid shard-level
     * metrics. The value "<code>ALL</code>" enhances every metric.</p> <ul> <li>
     * <code>IncomingBytes</code> </li> <li> <code>IncomingRecords</code> </li> <li>
     * <code>OutgoingBytes</code> </li> <li> <code>OutgoingRecords</code> </li> <li>
     * <code>WriteProvisionedThroughputExceeded</code> </li> <li>
     * <code>ReadProvisionedThroughputExceeded</code> </li> <li>
     * <code>IteratorAgeMilliseconds</code> </li> <li> <code>ALL</code> </li> </ul>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/kinesis/latest/dev/monitoring-with-cloudwatch.html">Monitoring
     * the Amazon Kinesis Streams Service with Amazon CloudWatch</a> in the <i>Amazon
     * Kinesis Streams Developer Guide</i>.</p>
     */
    inline EnhancedMetrics& AddShardLevelMetrics(MetricsName&& value) { m_shardLevelMetricsHasBeenSet = true; m_shardLevelMetrics.push_back(value); return *this; }

  private:
    Aws::Vector<MetricsName> m_shardLevelMetrics;
    bool m_shardLevelMetricsHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
