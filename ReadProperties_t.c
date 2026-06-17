
/* public: void __thiscall CEntity::ReadProperties_t(class CTStream &,int) */

void __thiscall CEntity::ReadProperties_t(CEntity *this,CTStream *param_1,int param_2)

{
  uint uVar1;
  CEntityProperty *pCVar2;
  int iVar3;
  char *pcVar4;
  CEntity *pCVar5;
  uint uVar6;
  CTString *pCVar7;
  long lVar8;
  char *pcVar9;
  int local_98;
  undefined1 local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  undefined4 local_80;
  undefined4 local_7a;
  undefined1 local_76;
  undefined4 local_75;
  undefined1 local_71;
  char *local_70;
  CEntity aCStack_6c [4];
  CEntity local_68 [8];
  undefined4 auStack_60 [4];
  CEntity local_50 [16];
  CEntity local_40 [16];
  CEntity local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x132f40  2979  ?ReadProperties_t@CEntity@@QAEXAAVCTStream@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218f7e;
  local_c = ExceptionList;
  local_94 = DAT_36238518;
  local_98 = DAT_36238514;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_98);
  local_98 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  if (0 < local_98) {
    do {
      uVar1 = **(uint **)(param_1 + 0x14);
      uVar6 = uVar1 >> 8;
      uVar1 = uVar1 & 0xff;
      *(uint **)(param_1 + 0x14) = *(uint **)(param_1 + 0x14) + 1;
      pCVar2 = PropertyForTypeAndID(this,uVar1,uVar6);
      if ((pCVar2 == (CEntityProperty *)0x0) &&
         ((uVar1 != 5 ||
          (pCVar2 = PropertyForTypeAndID(this,0x16,uVar6), pCVar2 == (CEntityProperty *)0x0)))) {
        switch(uVar1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 9:
        case 10:
        case 0xb:
        case 0xd:
        case 0x19:
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
          break;
        case 5:
          local_8c = StringDuplicate(&DAT_36222fa0);
          local_4 = 0;
          ::operator>>(param_1,(CTString *)&local_8c);
          local_4 = 0xffffffff;
          StringFree(local_8c);
          break;
        case 8:
          CTFileName::CTFileName((CTFileName *)&local_70);
          local_4 = 2;
          ::operator>>(param_1,(CTFileName *)&local_70);
          local_4 = 0xffffffff;
          StringFree(local_70);
          break;
        case 0xc:
          iVar3 = 1;
          do {
            *(undefined4 *)(local_68 + iVar3 * 4 + -4) = 0x7f61b1e6;
            auStack_60[iVar3] = 0xff61b1e6;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 4);
          lVar8 = 0x18;
          pCVar5 = local_68;
          goto LAB_361333dc;
        case 0xe:
        case 0xf:
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0xc;
          break;
        case 0x10:
          lVar8 = 0x10;
          pCVar5 = local_40;
          goto LAB_361333dc;
        case 0x11:
          FUN_36033b60(param_1);
          break;
        case 0x13:
          FUN_36033950(param_1);
          break;
        case 0x14:
          local_88 = StringDuplicate(&DAT_36222fa0);
          local_4 = 3;
          ::operator>>(param_1,(CTString *)&local_88);
          local_4 = 0xffffffff;
          StringFree(local_88);
          break;
        case 0x15:
          FUN_36033ad0(param_1,param_2);
          break;
        case 0x16:
          local_75 = DAT_3623851c;
          local_71 = DAT_36238520;
          CTStream::ExpectID_t(param_1,(CChunkID *)&local_75);
          local_90 = StringDuplicate(&DAT_36222fa0);
          local_4 = 1;
          ::operator>>(param_1,(CTString *)&local_90);
          local_4 = 0xffffffff;
          StringFree(local_90);
          break;
        case 0x17:
          lVar8 = 0x10;
          pCVar5 = local_50;
          goto LAB_361333dc;
        case 0x18:
          lVar8 = 0x24;
          pCVar5 = local_30;
          goto LAB_361333dc;
        case 0x1a:
          SkipModelInstance_t(param_1);
        }
        goto switchD_36132ff5_caseD_12;
      }
      iVar3 = *(int *)pCVar2;
      if ((uVar1 == 5) && (iVar3 == 0x16)) {
        iVar3 = 5;
      }
      switch(iVar3) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 6:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0x19:
        *(undefined4 *)(this + *(int *)(pCVar2 + 0xc)) = **(undefined4 **)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
        break;
      case 5:
      case 0x14:
        ::operator>>(param_1,(CTString *)(this + *(int *)(pCVar2 + 0xc)));
        break;
      case 7:
        ReadEntityPointer_t(this,param_1,(CEntityPointer *)(this + *(int *)(pCVar2 + 0xc)));
        break;
      case 8:
        ::operator>>(param_1,(CTFileName *)(this + *(int *)(pCVar2 + 0xc)));
        iVar3 = CTString::operator==((CTString *)(this + *(int *)(pCVar2 + 0xc)),&DAT_36238529);
        if ((iVar3 == 0) && (_bWorldEditorApp != 0)) {
          iVar3 = FileExists((CTFileName *)(this + *(int *)(pCVar2 + 0xc)));
          while (iVar3 == 0) {
            local_84 = StringDuplicate(&DAT_36222fa0);
            local_80 = 0;
            iVar3 = *(int *)(pCVar2 + 0xc);
            pcVar9 = s_All_files_______3623852c;
            pCVar7 = (CTString *)&local_84;
            local_4 = 4;
            pcVar4 = StringDuplicate(*(char **)(this + iVar3));
            iVar3 = FUN_36032f80(pcVar4,*(undefined4 *)(this + iVar3 + 4),pCVar7,pcVar9);
            if (iVar3 == 0) {
              pcVar4 = Translate(s_ETRSFile___s__does_not_exist_36238544,4);
              ThrowF_t(pcVar4);
            }
            else {
              CTFileName::operator=
                        ((CTFileName *)(this + *(int *)(pCVar2 + 0xc)),(CTFileName *)&local_84);
            }
            local_4 = 0xffffffff;
            StringFree(local_84);
            iVar3 = FileExists((CTFileName *)(this + *(int *)(pCVar2 + 0xc)));
          }
        }
        break;
      case 0xc:
        lVar8 = 0x18;
        pCVar5 = this + *(int *)(pCVar2 + 0xc);
        goto LAB_361333dc;
      case 0xe:
        lVar8 = 0xc;
        pCVar5 = this + *(int *)(pCVar2 + 0xc);
        goto LAB_361333dc;
      case 0xf:
        lVar8 = 0xc;
        goto LAB_361333d6;
      case 0x10:
      case 0x17:
        lVar8 = 0x10;
        pCVar5 = this + *(int *)(pCVar2 + 0xc);
        goto LAB_361333dc;
      case 0x11:
        FUN_36034500(param_1,(CModelObject *)(this + *(int *)(pCVar2 + 0xc)));
        break;
      case 0x12:
        lVar8 = 0x18;
        goto LAB_361333d6;
      case 0x13:
        FUN_36033840(param_1,(CAnimObject *)(this + *(int *)(pCVar2 + 0xc)));
        break;
      case 0x15:
        iVar3 = *(int *)(pCVar2 + 0xc);
        FUN_36033ab0(param_1,(CSoundObject *)(this + iVar3),param_2);
        *(CEntity **)((CSoundObject *)(this + iVar3) + 0xc) = this;
        break;
      case 0x16:
        local_7a = DAT_36238524;
        local_76 = DAT_36238528;
        CTStream::ExpectID_t(param_1,(CChunkID *)&local_7a);
        ::operator>>(param_1,(CTString *)(this + *(int *)(pCVar2 + 0xc)));
        break;
      case 0x18:
        lVar8 = 0x24;
LAB_361333d6:
        pCVar5 = this + *(int *)(pCVar2 + 0xc);
LAB_361333dc:
        CTStream::Read_t(param_1,pCVar5,lVar8);
        break;
      case 0x1a:
        ReadModelInstance_t(param_1,(CModelInstance *)(this + *(int *)(pCVar2 + 0xc)),1);
      }
switchD_36132ff5_caseD_12:
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  ExceptionList = local_c;
  return;
}

