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
#include <aws/ec2/model/CreateTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateTagsRequest::CreateTagsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTags&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }
  if(m_resourcesHasBeenSet)
  {
    unsigned resourcesCount = 1;
    for(auto& item : m_resources)
    {
      ss << "ResourceId." << resourcesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourcesCount++;
    }
  }
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tag.", tagsCount, "");
      tagsCount++;
    }
  }
  ss << "Version=2015-10-01";
  return ss.str();
}

