/*********************************************************************************************************
**
**                                    中国软件开源组织
**
**                                   嵌入式实时操作系统
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: ttinyShellPerfCmd.h
**
** 创   建   人: Han.Hui (韩辉)
**
** 文件创建日期: 2016 年 07 月 28 日
**
** 描        述: 性能分析工具.
*********************************************************************************************************/

#ifndef __TTINYSHELLPERFCMD_H
#define __TTINYSHELLPERFCMD_H

/*********************************************************************************************************
  裁剪控制
*********************************************************************************************************/
#if (LW_CFG_SHELL_EN > 0) && (LW_CFG_SYSPERF_EN > 0) && (LW_CFG_SHELL_PERF_TRACE_EN > 0)

VOID  __tshellPerfCmdInit(VOID);

#endif                                                                  /*  LW_CFG_SHELL_EN > 0         */
                                                                        /*  LW_CFG_SYSPERF_EN > 0       */
                                                                        /*  LW_CFG_SHELL_PERF_TRACE_EN  */
#endif                                                                  /*  __TTINYSHELLPERFCMD_H       */
/*********************************************************************************************************
  END
*********************************************************************************************************/
