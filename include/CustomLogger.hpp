#pragma once

//#define LOG_INFO(value...)
#define LOG_INFO(_value...) getLogger().info(value) 
//#define LOG_DEBUG(value...) 
#define LOG_DEBUG(_value...) getLogger().debug(value) 
//#define LOG_ERROR(value...)
#define LOG_ERROR(_value...) getLogger().error(value) 

#include "beatsaber-hook/shared/utils/utils.h"
getLogger();