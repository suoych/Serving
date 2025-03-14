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
#include "kvdb/kvdb_impl.h"
#include "kvdb/paddle_rocksdb.h"
class RocksKVDB : public AbstractKVDB {
 public:
  void CreateDB();
  void SetDBName(std::string);
  void Set(std::string key, std::string value);
  std::string Get(std::string key);
  void Close();
  ~RocksKVDB();

 private:
  std::shared_ptr<RocksDBWrapper> db_;

 public:
  static int db_count;
};
