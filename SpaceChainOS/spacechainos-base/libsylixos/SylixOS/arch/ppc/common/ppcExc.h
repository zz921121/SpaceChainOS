/*********************************************************************************************************
**
**                                    �й�������Դ��֯
**
**                                   Ƕ��ʽʵʱ����ϵͳ
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**
** ��   ��   ��: ppcExc.h
**
** ��   ��   ��: Jiao.JinXing (������)
**
** �ļ���������: 2015 �� 12 �� 15 ��
**
** ��        ��: PowerPC ��ϵ�����쳣����.
*********************************************************************************************************/

#ifndef __ARCH_PPCEXC_H
#define __ARCH_PPCEXC_H

VOID  archDecrementerInit(ULONG    ulVector,
                          BOOL     bPreemptive,
                          UINT32   uiDecValue);

#endif                                                                  /*  __ARCH_PPCEXC_H             */
/*********************************************************************************************************
  END
*********************************************************************************************************/