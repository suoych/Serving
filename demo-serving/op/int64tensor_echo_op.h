// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include "demo-serving/int64tensor_service.pb.h"

#include "predictor/common/inner_common.h"
#include "predictor/framework/channel.h"
#include "predictor/framework/op_repository.h"
#include "predictor/op/op.h"

namespace baidu {
namespace paddle_serving {
namespace predictor {

class Int64TensorEchoOp
    : public OpWithChannel<
          baidu::paddle_serving::predictor::int64tensor_service::Response> {
 public:
  DECLARE_OP(Int64TensorEchoOp);

  int inference();
};

}  // namespace predictor
}  // namespace paddle_serving
}  // namespace baidu
