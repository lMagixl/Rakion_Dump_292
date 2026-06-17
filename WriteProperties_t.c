
/* public: void __thiscall CEntity::WriteProperties_t(class CTStream &,int) */

void __thiscall CEntity::WriteProperties_t(CEntity *this,CTStream *param_1,int param_2)

{
  int iVar1;
  CTStream *this_00;
  int *piVar2;
  CEntity *pCVar3;
  int iVar4;
  int iVar5;
  CTStream *pCVar6;
  undefined4 *puVar7;
  int local_14;
  undefined1 *local_10;
  undefined1 local_c;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0x132a10  3982  ?WriteProperties_t@CEntity@@QAEXAAVCTStream@@H@Z */
  this_00 = param_1;
  iVar5 = 0;
  for (iVar1 = *(int *)(*(int *)(this + 0x78) + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    if (param_2 == 0) {
      iVar5 = iVar5 + *(int *)(iVar1 + 0xc);
    }
    else {
      iVar4 = *(int *)(iVar1 + 0xc);
      if (0 < iVar4) {
        piVar2 = *(int **)(iVar1 + 8);
        do {
          if (((*(byte *)(piVar2 + 5) & 2) != 0) || (*piVar2 == 0x15)) {
            iVar5 = iVar5 + 1;
          }
          piVar2 = piVar2 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  local_10 = DAT_36238564;
  local_c = DAT_36238568;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_10);
  **(int **)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar1 = *(int *)(*(int *)(this + 0x78) + 0x20);
  do {
    if (iVar1 == 0) {
      return;
    }
    local_14 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      param_1 = (CTStream *)0x0;
      do {
        pCVar6 = param_1 + *(int *)(iVar1 + 8);
        if (((param_2 != 0) && (((byte)pCVar6[0x14] & 2) == 0)) && (*(uint *)pCVar6 != 0x15))
        goto switchD_36132b03_default;
        **(uint **)(this_00 + 0x14) = *(uint *)(pCVar6 + 8) << 8 | *(uint *)pCVar6;
        iVar5 = *(int *)(this_00 + 0x14);
        puVar7 = (undefined4 *)(iVar5 + 4);
        *(undefined4 **)(this_00 + 0x14) = puVar7;
        switch(*(uint *)pCVar6) {
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
          *puVar7 = *(undefined4 *)(this + *(uint *)(pCVar6 + 0xc));
          iVar5 = *(int *)(this_00 + 0x14) + 4;
          goto LAB_36132ce1;
        case 5:
        case 0x14:
          ::operator<<(this_00,(CTString *)(this + *(uint *)(pCVar6 + 0xc)));
          break;
        case 7:
          local_10 = &stack0xffffffd4;
          if (*(int *)(this + *(uint *)(pCVar6 + 0xc)) != 0) {
            piVar2 = (int *)(*(int *)(this + *(uint *)(pCVar6 + 0xc)) + 0x18);
            *piVar2 = *piVar2 + 1;
          }
          WriteEntityPointer_t(this,this_00);
          break;
        case 8:
          ::operator<<(this_00,(CTFileName *)(this + *(uint *)(pCVar6 + 0xc)));
          break;
        case 0xc:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          *puVar7 = *(undefined4 *)pCVar3;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pCVar3 + 4);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pCVar3 + 8);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(pCVar3 + 0xc);
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(pCVar3 + 0x10);
          *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(pCVar3 + 0x14);
          goto LAB_36132cdb;
        case 0xe:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          *puVar7 = *(undefined4 *)pCVar3;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pCVar3 + 4);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pCVar3 + 8);
          iVar5 = *(int *)(this_00 + 0x14) + 0xc;
          goto LAB_36132ce1;
        case 0xf:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          *puVar7 = *(undefined4 *)pCVar3;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pCVar3 + 4);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pCVar3 + 8);
          iVar5 = *(int *)(this_00 + 0x14) + 0xc;
          goto LAB_36132ce1;
        case 0x10:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          *puVar7 = *(undefined4 *)pCVar3;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pCVar3 + 4);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pCVar3 + 8);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(pCVar3 + 0xc);
          iVar5 = *(int *)(this_00 + 0x14) + 0x10;
          goto LAB_36132ce1;
        case 0x11:
          FUN_36033cf0(this_00,(CModelObject *)(this + *(uint *)(pCVar6 + 0xc)));
          break;
        case 0x12:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          *puVar7 = *(undefined4 *)pCVar3;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pCVar3 + 4);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pCVar3 + 8);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(pCVar3 + 0xc);
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(pCVar3 + 0x10);
          *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(pCVar3 + 0x14);
LAB_36132cdb:
          iVar5 = *(int *)(this_00 + 0x14) + 0x18;
          goto LAB_36132ce1;
        case 0x13:
          FUN_360339f0(this_00,this + *(uint *)(pCVar6 + 0xc));
          break;
        case 0x15:
          FUN_36033b40(this_00,(CSoundObject *)(this + *(uint *)(pCVar6 + 0xc)),param_2);
          break;
        case 0x16:
          local_5 = DAT_3623856c;
          local_1 = DAT_36238570;
          CTStream::WriteID_t(this_00,(CChunkID *)&local_5);
          ::operator<<(this_00,(CTString *)(this + *(uint *)(pCVar6 + 0xc)));
          break;
        case 0x17:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          *puVar7 = *(undefined4 *)pCVar3;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(pCVar3 + 4);
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pCVar3 + 8);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(pCVar3 + 0xc);
          iVar5 = *(int *)(this_00 + 0x14) + 0x10;
          goto LAB_36132ce1;
        case 0x18:
          pCVar3 = this + *(uint *)(pCVar6 + 0xc);
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *(undefined4 *)pCVar3;
            pCVar3 = pCVar3 + 4;
            puVar7 = puVar7 + 1;
          }
          iVar5 = *(int *)(this_00 + 0x14) + 0x24;
LAB_36132ce1:
          *(int *)(this_00 + 0x14) = iVar5;
          break;
        case 0x1a:
          WriteModelInstance_t(this_00,(CModelInstance *)(this + *(uint *)(pCVar6 + 0xc)),1);
        }
switchD_36132b03_default:
        local_14 = local_14 + 1;
        param_1 = param_1 + 0x20;
      } while (local_14 < *(int *)(iVar1 + 0xc));
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
  } while( true );
}

