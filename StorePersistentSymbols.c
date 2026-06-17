
/* public: void __thiscall CShell::StorePersistentSymbols(class CTFileName const &) */

void __thiscall CShell::StorePersistentSymbols(CShell *this,CTFileName *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  CTString *pCVar6;
  CTStream *this_00;
  char *pcVar7;
  int iVar8;
  CTFileStream local_a8 [116];
  CTSingleLock local_34 [16];
  CTString local_24 [4];
  int local_20 [2];
  CTString local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x38a40  3690  ?StorePersistentSymbols@CShell@@QAEXABVCTFileName@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621039c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff4c;
  ExceptionList = &local_10;
  CTSingleLock::CTSingleLock(local_34,(CTCriticalSection *)this,1);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  CTFileStream::CTFileStream(local_a8);
  local_8._0_1_ = 2;
  CTFileStream::Create_t(local_a8,param_1,2);
  CTStream::FPrintF_t((CTStream *)local_a8,(char *)local_a8);
  FUN_36039a80(local_20,this + 8);
  local_8._0_1_ = 3;
LAB_36038ac0:
  do {
    bVar2 = FUN_36039ac0(local_20);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      local_8 = CONCAT31(local_8._1_3_,1);
      CTFileStream::~CTFileStream(local_a8);
      local_8 = 0xffffffff;
      CTSingleLock::~CTSingleLock(local_34);
      ExceptionList = local_10;
      return;
    }
    piVar3 = (int *)FUN_36039bd0(local_20);
    if ((piVar3[5] & 4U) != 0) {
      pcVar7 = s_user_36226474;
      if ((piVar3[5] & 2U) == 0) {
        pcVar7 = &DAT_3622647a;
      }
      piVar4 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*piVar3);
      iVar8 = *piVar4;
      if (iVar8 == 3) {
        piVar5 = (int *)thunk_FUN_36039b40(&DAT_362bec70,piVar4[2]);
        CTString::CTString(local_24);
        iVar8 = *piVar5;
        local_8._0_1_ = 4;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 4;
        if (iVar8 == 6) {
          for (iVar8 = 0; iVar8 < piVar4[1]; iVar8 = iVar8 + 1) {
            CTStream::FPrintF_t((CTStream *)piVar3[2],(char *)local_a8,s__s__d___FLOAT__g__3622647c,
                                piVar3[1],iVar8,
                                (double)*(float *)((CTStream *)piVar3[2] + iVar8 * 4));
          }
        }
        else if (iVar8 == 5) {
          for (iVar8 = 0; iVar8 < piVar4[1]; iVar8 = iVar8 + 1) {
            CTStream::FPrintF_t((CTStream *)local_a8,(char *)local_a8,s__s__d___INDEX__d__36226490,
                                piVar3[1],iVar8);
          }
        }
        else if (iVar8 == 7) {
          for (iVar8 = 0; iVar8 < piVar4[1]; iVar8 = iVar8 + 1) {
            pCVar6 = (CTString *)FUN_360371f0(&param_1,(char *)piVar3[2]);
            local_8._0_1_ = 5;
            pcVar7 = CTString::operator_char_const_(pCVar6);
            CTStream::FPrintF_t((CTStream *)(int)pcVar7[iVar8],(char *)local_a8,
                                s__s__d____s___362264a4,piVar3[1],iVar8);
            local_8._0_1_ = 4;
            CTString::~CTString((CTString *)&param_1);
          }
        }
        else {
          local_8._0_1_ = uVar1;
          ThrowF_t(s__s_is_an_array_of_wrong_type_362264b4);
        }
        local_8._0_1_ = 3;
        CTString::~CTString(local_24);
        FUN_36039ab0(local_20);
        goto LAB_36038ac0;
      }
      if (iVar8 == 6) {
        CTStream::FPrintF_t((CTStream *)local_a8,(char *)local_a8,
                            s_persistent_extern__sFLOAT__s__FL_362264d4,pcVar7,piVar3[1],
                            (double)*(float *)piVar3[2]);
        FUN_36039ab0(local_20);
        goto LAB_36038ac0;
      }
      if (iVar8 == 5) {
        CTStream::FPrintF_t((CTStream *)piVar3[1],(char *)local_a8,
                            s_persistent_extern__sINDEX__s__IN_36226500,pcVar7,(CTStream *)piVar3[1]
                           );
        FUN_36039ab0(local_20);
        goto LAB_36038ac0;
      }
      if (iVar8 == 7) {
        pCVar6 = (CTString *)FUN_360371f0((undefined4 *)local_18,(char *)piVar3[2]);
        local_8._0_1_ = 6;
        CTString::operator_char_const_(pCVar6);
        CTStream::FPrintF_t(this_00,(char *)local_a8,s_persistent_extern__sCTString__s__3622652c,
                            pcVar7,piVar3[1]);
        local_8._0_1_ = 3;
        CTString::~CTString(local_18);
        FUN_36039ab0(local_20);
        goto LAB_36038ac0;
      }
      ThrowF_t(s__s_of_wrong_type_36226554);
    }
    FUN_36039ab0(local_20);
  } while( true );
}

