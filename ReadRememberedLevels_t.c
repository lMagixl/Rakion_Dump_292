
/* public: void __thiscall CSessionState::ReadRememberedLevels_t(class CTStream *) */

void __thiscall CSessionState::ReadRememberedLevels_t(CSessionState *this,CTStream *param_1)

{
  CTStream *pCVar1;
  CTStream *pCVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar2 = param_1;
                    /* 0x10fb70  2981  ?ReadRememberedLevels_t@CSessionState@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621808e;
  local_c = ExceptionList;
  local_d = DAT_36237808;
  local_11 = DAT_36237804;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_11);
  pCVar1 = (CTStream *)**(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  param_1 = pCVar1;
  if (0 < (int)pCVar1) {
    do {
      puVar3 = (undefined4 *)FUN_361bf99c(0x68);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        local_4._0_1_ = 1;
        local_4._1_3_ = 0;
        pcVar4 = StringDuplicate(&DAT_36222fa0);
        puVar3[2] = pcVar4;
        local_4 = CONCAT31(local_4._1_3_,2);
        CTMemoryStream::CTMemoryStream((CTMemoryStream *)(puVar3 + 3));
      }
      local_4 = 0xffffffff;
      ::operator>>(pCVar2,(CTString *)(puVar3 + 2));
      param_1 = param_1 + -1;
    } while (param_1 != (CTStream *)0x0);
  }
  ExceptionList = local_c;
  return;
}

