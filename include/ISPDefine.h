//
//  ISPDefine.h
//  ISP
//
//  Created by ldy on 2021/11/04.
//
#ifndef ISPDefine_h
#define ISPDefine_h

#include <assert.h>
#include <stdio.h>

#define ISP_PRINT(format, ...) printf(format, ##__VA_ARGS__)
#define ISP_ERROR(format, ...) printf(format, ##__VA_ARGS__)


#define ISP_ASSERT(x)                                            \
    {                                                            \
        int res = (x);                                           \
        if (!res) {                                              \
            ISP_ERROR("Error for %s, %d\n", __FILE__, __LINE__); \
            assert(res);                                         \
        }                                                        \
    }

#define ISP_ASSERT(x)                                            \
    {                                                            \
        int res = (x);                                           \
        if (!res) {                                              \
            ISP_ERROR("Error for %s, %d\n", __FILE__, __LINE__); \
        }                                                        \
    }

#define FUNC_PRINT(x) ISP_PRINT(#x "=%d in %s, %d \n", x, __func__, __LINE__);
#define FUNC_PRINT_ALL(x, type) ISP_PRINT(#x "=" #type " %" #type " in %s, %d \n", x, __func__, __LINE__);

#endif /* ISPDefine_h */