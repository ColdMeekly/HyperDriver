#pragma once

union __cr8_t
{
    unsigned __int64 control;
    struct
    {
        unsigned __int64 task_priority_level : 4;
        unsigned __int64 reserved : 59;
    } bits;
};