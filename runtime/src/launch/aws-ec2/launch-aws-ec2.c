/*
 * Copyright 2004-2017 Cray Inc.
 * Other additional copyright holders may be indicated within.
 * 
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * 
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>
#include <chpllaunch.h>

int chpl_launch(int argc, char* argv[], int32_t numLocales) {
  return 0;
}

int chpl_launch_handle_arg(int argc, char* argv[], int argNum, int32_t lineno, int32_t filename) {
  return 0;
}

void chpl_launch_print_help(void) {
  fprintf(stdout, "LAUNCHER FLAGS:\n");
  fprintf(stdout, "===============\n");
  fprintf(stdout, "FIXME: aws-ec2 launcher!\n");
}
