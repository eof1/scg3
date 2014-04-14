/**
 * \file scg_glm.h
 * \brief Local header file for GLM OpenGL Mathematics library.
 *
 * \author Volker Ahlers\n
 *         volker.ahlers@hs-hannover.de
 */

/*
 * Copyright 2014 Volker Ahlers
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
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

#ifndef SCG_GLM_H_
#define SCG_GLM_H_


#if defined(__GNUC__)
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#elif defined(_MSC_VER)
#pragma warning(disable: 4996)
#endif

#ifdef GLM_MESSAGES
#undef GLM_MESSAGES
#endif

#include "../extern/glm/glm.hpp"
#include "../extern/glm/gtc/matrix_transform.hpp"
#include "../extern/glm/gtc/quaternion.hpp"
#include "../extern/glm/gtc/type_ptr.hpp"


#if defined(__GNUC__)
#pragma GCC diagnostic warning "-Wstrict-aliasing"
#elif defined(_MSC_VER)
#pragma warning(default: 4996)
#endif


#endif /* SCG_GLM_H_ */
