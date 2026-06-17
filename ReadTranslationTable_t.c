
/* void __cdecl ReadTranslationTable_t(class CDynamicArray<class CTranslationPair> &,class
   CTFileName const &) */

void __cdecl
ReadTranslationTable_t(CDynamicArray<class_CTranslationPair> *param_1,CTFileName *param_2)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  CTString *this;
  int iVar6;
  undefined4 *in_stack_0000000c;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  CTFileStream local_7c [112];
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x45750  2997
                       ?ReadTranslationTable_t@@YAXAAV?$CDynamicArray@VCTranslationPair@@@@ABVCTFileName@@@Z
                        */
  local_4 = 0xffffffff;
  local_8 = &LAB_36211380;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  DAT_362bf210 = 0;
  ExceptionList = &pvStack_c;
  CTFileStream::CTFileStream((CTFileStream *)&local_80);
  local_4 = 0;
  CTFileStream::Open_t((CTFileStream *)&local_80,param_2,1);
  FUN_360455f0(&local_8c);
  local_4 = CONCAT31(local_4._1_3_,1);
  CTString::ScanF(this,(char *)&local_8c);
  piVar1 = FUN_36045bd0(param_2,local_8c);
  if (0 < local_8c) {
    piVar1 = piVar1 + 2;
    do {
      uVar2 = FUN_360454c0((int)local_7c);
      if (uVar2 != 0xfffffffe) {
        uVar7 = *in_stack_0000000c;
        if (uVar2 == 0xffffffff) {
          uVar8 = DAT_362bf210;
          pcVar3 = Translate(s_ETRSerror_in_file_<_s>__prematur_36227798,4);
          ThrowF_t(pcVar3,uVar7,uVar8);
        }
        else {
          uVar8 = DAT_362bf210;
          iVar9 = iVar6;
          uVar5 = uVar2;
          pcVar3 = Translate(s_ETRSerror_in_file_<_s>__line___d_362277d0,4);
          ThrowF_t(pcVar3,uVar7,uVar8,iVar9,uVar5);
        }
      }
      puVar4 = FUN_360455f0(&local_84);
      pcVar3 = StringDuplicate((char *)*puVar4);
      StringFree((char *)piVar1[-1]);
      piVar1[-1] = (int)pcVar3;
      StringFree(local_84);
      uVar5 = FUN_360454c0((int)local_7c);
      if (uVar5 != 0xfffffffd) {
        if (uVar2 == 0xffffffff) {
          uVar7 = *in_stack_0000000c;
          uVar8 = DAT_362bf210;
          pcVar3 = Translate(s_ETRSerror_in_file_<_s>__prematur_3622781c,4);
          ThrowF_t(pcVar3,uVar7,uVar8);
        }
        else {
          uVar7 = *in_stack_0000000c;
          uVar8 = DAT_362bf210;
          iVar9 = iVar6;
          pcVar3 = Translate(s_ETRSerror_in_file_<_s>__line___d_36227850,4);
          ThrowF_t(pcVar3,uVar7,uVar8,iVar9,uVar2);
        }
      }
      puVar4 = FUN_360455f0(&local_80);
      pcVar3 = StringDuplicate((char *)*puVar4);
      StringFree((char *)*piVar1);
      *piVar1 = (int)pcVar3;
      StringFree(local_80);
      iVar6 = iVar6 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar6 < local_8c);
  }
  uVar2 = FUN_360454c0((int)local_7c);
  if (uVar2 != 0xffffffff) {
    uVar7 = *in_stack_0000000c;
    pcVar3 = Translate(s_ETRSerror_in_file_<_s>__end_of_f_362278a0,4);
    ThrowF_t(pcVar3,uVar7);
  }
  StringFree(local_88);
  CTFileStream::~CTFileStream(local_7c);
  ExceptionList = local_8;
  return;
}

