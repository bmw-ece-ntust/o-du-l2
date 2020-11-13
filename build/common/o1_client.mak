################################################################################
#   Copyright (c) [2017-2019] [Radisys]                                        #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################

# This is makefile for O1 client

include ../common/rsys_fancy.mak
include ../common/env.mak
COLOR=$(COLOR_RED)

SRC_DIR=$(ROOT_DIR)/src/o1/o1_client
C_SRCS=$(wildcard $(SRC_DIR)/*.c)
C_OBJS=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_SRCS))

lib: $(LIB_DIR)/libo1client.a
include $(COM_BUILD_DIR)/compile.mak

L_OPTS=-lsysrepo -lyang
L_OPTS+= -lsysrepo-cpp -lyang-cpp
L_OPTS+= -lm -lpthread
I_OPTS+=-I$(ROOT_DIR)/src/o1/o1_client
I_OPTS+=-I$(ROOT_DIR)/src/cm
I_OPTS+=-I$(ROOT_DIR)/src/mt

#-------------------------------------------------------------#
#Linker macros
#-------------------------------------------------------------#
$(LIB_DIR)/libo1client.a:$(C_OBJS) $(C_WO_PED_OBJS)
		  @echo -e "Creating Archive $(COLOR) $@ $(REVERT_COLOR)"
		  $(Q)ar -cr $(LIB_DIR)/libo1client.a $(C_OBJS) $(C_WO_PED_OBJS)

#-------------------------------------------------------------#
#Clean macros
#-------------------------------------------------------------#
clean:
		  @echo -e "$(COLOR_RED)Cleaning O1 Client$(REVERT_COLOR)"
		  $(Q)\rm -f $(LIB_DIR)/libo1client.a $(C_OBJS) $(C_WO_PED_OBJS) $(LOG_FILES) $(BAK_FILES)
 
#######################################################################
#         End of file                                                 #
#######################################################################