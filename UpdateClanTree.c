
/* public: void __thiscall AccountInfo_s::UpdateClanTree(class CTString const &,bool) */

void __thiscall AccountInfo_s::UpdateClanTree(AccountInfo_s *this,CTString *param_1,bool param_2)

{
  AccountInfo_s AVar1;
  AccountInfo_s *_String;
  AccountInfo_s *pAVar2;
  int iVar3;
  xEncryptMemory *pxVar4;
  AccountInfo_s *pAVar5;
  int iVar6;
  AccountInfo_s *pAVar7;
  AccountInfo_s *pAVar8;
  bool bVar9;
  undefined3 in_stack_00000009;
  CTString **ppCVar10;
  bool *pbVar11;
  uint uVar12;
  uint uVar13;
  
                    /* 0x19a550  3909  ?UpdateClanTree@AccountInfo_s@@QAEXABVCTString@@_N@Z */
  if ((this[0x2c45] != (AccountInfo_s)0x0) && (*(int *)(this + 0x2c10) != 0)) {
    _String = *(AccountInfo_s **)param_1;
    _strlwr((char *)_String);
    pAVar2 = this + 0x2c46;
    pAVar7 = _String;
    do {
      AVar1 = *pAVar2;
      bVar9 = (byte)AVar1 < (byte)*pAVar7;
      if (AVar1 != *pAVar7) {
LAB_3619a5b4:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_3619a5b9;
      }
      if (AVar1 == (AccountInfo_s)0x0) break;
      AVar1 = pAVar2[1];
      bVar9 = (byte)AVar1 < (byte)pAVar7[1];
      if (AVar1 != pAVar7[1]) goto LAB_3619a5b4;
      pAVar2 = pAVar2 + 2;
      pAVar7 = pAVar7 + 2;
    } while (AVar1 != (AccountInfo_s)0x0);
    iVar3 = 0;
LAB_3619a5b9:
    uVar12 = 1;
    ppCVar10 = &param_1;
    param_1 = (CTString *)0x0;
    if (iVar3 == 0) {
      uVar13 = *(uint *)(this + 0x2d58);
      pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
      FUN_3600ce60(pxVar4,uVar13,(int)ppCVar10,uVar12);
      if (param_2 != false) {
        _param_2 = 1;
        FUN_3619ca20(this + 0x2d54,(undefined4 *)&param_2);
        return;
      }
    }
    else {
      uVar13 = *(uint *)(this + 0x2d64);
      pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
      FUN_3600ce60(pxVar4,uVar13,(int)ppCVar10,uVar12);
      iVar3 = 0;
      param_1 = (CTString *)((uint)param_1 & 0xffffff00);
      if (this[0x2c64] != (AccountInfo_s)0x0) {
        pAVar2 = this + 0x2c65;
        pAVar7 = this + 0x2d38;
        pAVar8 = _String;
        pAVar5 = pAVar2;
LAB_3619a652:
        do {
          AVar1 = *pAVar2;
          bVar9 = (byte)AVar1 < (byte)*pAVar8;
          if (AVar1 == *pAVar8) {
            if (AVar1 != (AccountInfo_s)0x0) {
              AVar1 = pAVar2[1];
              bVar9 = (byte)AVar1 < (byte)pAVar8[1];
              if (AVar1 != pAVar8[1]) goto LAB_3619a676;
              pAVar2 = pAVar2 + 2;
              pAVar8 = pAVar8 + 2;
              if (AVar1 != (AccountInfo_s)0x0) goto LAB_3619a652;
            }
            iVar6 = 0;
          }
          else {
LAB_3619a676:
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          }
          if (iVar6 == 0) {
            *(int *)pAVar7 = 0;
            if (param_2 != false) {
              *(int *)pAVar7 = 1;
            }
          }
          if (*(int *)pAVar7 == 1) {
            param_1 = (CTString *)CONCAT31(param_1._1_3_,(byte)param_1 + '\x01');
          }
          iVar3 = iVar3 + 1;
          pAVar2 = pAVar5 + 0x11;
          pAVar7 = pAVar7 + 4;
          pAVar8 = _String;
          pAVar5 = pAVar2;
        } while (iVar3 < (int)(uint)(byte)this[0x2c64]);
        if ((1 < (byte)param_1) && (((byte)this[0x2c64] + 1) / 2 <= ((uint)param_1 & 0xff))) {
          uVar12 = *(uint *)(this + 0x2d64);
          uVar13 = 1;
          pbVar11 = &param_2;
          _param_2 = 1;
          pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
          FUN_3600ce60(pxVar4,uVar12,(int)pbVar11,uVar13);
        }
      }
    }
  }
  return;
}

