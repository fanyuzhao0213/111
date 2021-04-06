/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-04-06     RT-Thread    first version
 */

#include <rtthread.h>
#include "main.h"

#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

int main(void)
{
    int count = 1;
    Sys_init();
    while (count++)
    {
//        LOG_D("Hello RT-Thread!");
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
        rt_thread_mdelay(1000);
    }

    return RT_EOK;
}
