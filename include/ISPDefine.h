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

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

#define UP_DIV(x, y) (((x) + (y) - (1)) / (y))
#define ROUND_UP(x, y) (((x) + (y) - (1)) / (y) * (y))
#define GN_UP4(x) ROUND_UP((x), 4)
#define GN_UP8(x) ROUND_UP((x), 8)
#define ISP_USE_NEON 0x1

#define ISP_ASSERT(x)                                            \
    {                                                            \
        int res = (x);                                           \
        if (!res) {                                              \
            ISP_ERROR("Error for %s, %d\n", __FILE__, __LINE__); \
            assert(res);                                         \
        }                                                        \
    }

#define FUNC_PRINT(x) ISP_PRINT(#x "=%d in %s, %d \n", x, __func__, __LINE__);
#define FUNC_PRINT_ALL(x, type) ISP_PRINT(#x "=" #type " %" #type " in %s, %d \n", x, __func__, __LINE__);

#endif /* ISPDefine_h */