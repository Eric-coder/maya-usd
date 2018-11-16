//
// Copyright 2017 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
// WARNING: THIS FILE IS GENERATED.  DO NOT EDIT.
//

#define TF_MAX_ARITY 7
#include "pxr/pxr.h"
#include "pxr/base/arch/defines.h"
#if defined(ARCH_OS_DARWIN)
#include <mach/mach_time.h>
#endif
#if defined(ARCH_OS_LINUX)
#include <x86intrin.h>
#endif
#if defined(ARCH_OS_WINDOWS)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <intrin.h>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_tuple.hpp>
#endif
#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <inttypes.h>
#include <iosfwd>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <memory>
#include <mutex>
#include <set>
#include <sstream>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string>
#include <sys/types.h>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_set>
#include <utility>
#include <vector>
#include <boost/aligned_storage.hpp>
#include <boost/any.hpp>
#include <boost/container/vector.hpp>
#include <boost/function.hpp>
#include <boost/functional/hash.hpp>
#include <boost/functional/hash_fwd.hpp>
#include <boost/intrusive_ptr.hpp>
#include <boost/iterator/reverse_iterator.hpp>
#include <boost/iterator_adaptors.hpp>
#include <boost/mpl/and.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/mpl/empty.hpp>
#include <boost/mpl/front.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/pop_front.hpp>
#include <boost/mpl/remove.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/noncopyable.hpp>
#include <boost/operators.hpp>
#include <boost/optional.hpp>
#include <boost/preprocessor.hpp>
#include <boost/preprocessor/arithmetic/add.hpp>
#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/arithmetic/sub.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/logical/and.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/punctuation/comma.hpp>
#include <boost/preprocessor/punctuation/comma_if.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/seq/filter.hpp>
#include <boost/preprocessor/seq/for_each.hpp>
#include <boost/preprocessor/seq/for_each_i.hpp>
#include <boost/preprocessor/seq/push_back.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/stringize.hpp>
#include <boost/preprocessor/tuple/eat.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>
#ifdef PXR_PYTHON_SUPPORT_ENABLED
#include <boost/python/object_fwd.hpp>
#include <boost/python/object_operators.hpp>
#if defined(__APPLE__) // Fix breakage caused by Python's pyport.h.
#undef tolower
#undef toupper
#endif
#endif // PXR_PYTHON_SUPPORT_ENABLED
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/smart_ptr/intrusive_ptr.hpp>
#include <boost/type_traits/decay.hpp>
#include <boost/type_traits/has_left_shift.hpp>
#include <boost/type_traits/has_trivial_assign.hpp>
#include <boost/type_traits/has_trivial_constructor.hpp>
#include <boost/type_traits/has_trivial_copy.hpp>
#include <boost/type_traits/has_trivial_destructor.hpp>
#include <boost/type_traits/is_base_of.hpp>
#include <boost/type_traits/is_const.hpp>
#include <boost/type_traits/is_convertible.hpp>
#include <boost/type_traits/is_enum.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/utility/value_init.hpp>
#include <boost/weak_ptr.hpp>
#include <opensubdiv/far/topologyRefiner.h>
#include <opensubdiv/far/topologyRefinerFactory.h>
#include <tbb/atomic.h>
#ifdef PXR_PYTHON_SUPPORT_ENABLED
#include <Python.h>
#endif // PXR_PYTHON_SUPPORT_ENABLED