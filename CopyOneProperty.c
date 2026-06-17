
/* public: void __thiscall CEntity::CopyOneProperty(class CEntityProperty &,class CEntityProperty
   &,class CEntity &,unsigned long) */

void __thiscall
CEntity::CopyOneProperty
          (CEntity *this,CEntityProperty *param_1,CEntityProperty *param_2,CEntity *param_3,
          ulong param_4)

{
  CEntity *pCVar1;
  int iVar2;
  CEntity *pCVar3;
  
                    /* 0x131b20  1392  ?CopyOneProperty@CEntity@@QAEXAAVCEntityProperty@@0AAV1@K@Z
                        */
  switch(*(undefined4 *)param_1) {
  case 1:
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0x19:
    *(undefined4 *)(this + *(int *)(param_2 + 0xc)) =
         *(undefined4 *)(param_3 + *(int *)(param_1 + 0xc));
    return;
  case 2:
    *(undefined4 *)(this + *(int *)(param_2 + 0xc)) =
         *(undefined4 *)(param_3 + *(int *)(param_1 + 0xc));
    return;
  case 3:
  case 6:
    *(undefined4 *)(this + *(int *)(param_2 + 0xc)) =
         *(undefined4 *)(param_3 + *(int *)(param_1 + 0xc));
    return;
  case 5:
  case 0x16:
    CTString::operator=((CTString *)(this + *(int *)(param_2 + 0xc)),
                        (CTString *)(param_3 + *(int *)(param_1 + 0xc)));
    return;
  case 7:
    break;
  case 8:
    CTFileName::operator=
              ((CTFileName *)(this + *(int *)(param_2 + 0xc)),
               (CTFileName *)(param_3 + *(int *)(param_1 + 0xc)));
    return;
  case 0xc:
  case 0x12:
    pCVar1 = param_3 + *(int *)(param_1 + 0xc);
    pCVar3 = this + *(int *)(param_2 + 0xc);
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar1;
    *(undefined4 *)(pCVar3 + 4) = *(undefined4 *)(pCVar1 + 4);
    *(undefined4 *)(pCVar3 + 8) = *(undefined4 *)(pCVar1 + 8);
    *(undefined4 *)(pCVar3 + 0xc) = *(undefined4 *)(pCVar1 + 0xc);
    *(undefined4 *)(pCVar3 + 0x10) = *(undefined4 *)(pCVar1 + 0x10);
    *(undefined4 *)(pCVar3 + 0x14) = *(undefined4 *)(pCVar1 + 0x14);
    return;
  case 0xe:
    pCVar3 = param_3 + *(int *)(param_1 + 0xc);
    pCVar1 = this + *(int *)(param_2 + 0xc);
    *(undefined4 *)pCVar1 = *(undefined4 *)pCVar3;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(pCVar3 + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(pCVar3 + 8);
    return;
  case 0xf:
    pCVar1 = param_3 + *(int *)(param_1 + 0xc);
    pCVar3 = this + *(int *)(param_2 + 0xc);
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar1;
    *(undefined4 *)(pCVar3 + 4) = *(undefined4 *)(pCVar1 + 4);
    *(undefined4 *)(pCVar3 + 8) = *(undefined4 *)(pCVar1 + 8);
    return;
  case 0x10:
    pCVar3 = param_3 + *(int *)(param_1 + 0xc);
    pCVar1 = this + *(int *)(param_2 + 0xc);
    *(undefined4 *)pCVar1 = *(undefined4 *)pCVar3;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(pCVar3 + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(pCVar3 + 8);
    *(undefined4 *)(pCVar1 + 0xc) = *(undefined4 *)(pCVar3 + 0xc);
    return;
  case 0x11:
    CModelObject::Copy((CModelObject *)(this + *(int *)(param_2 + 0xc)),
                       (CModelObject *)(param_3 + *(int *)(param_1 + 0xc)));
    return;
  case 0x13:
    CAnimObject::Copy((CAnimObject *)(this + *(int *)(param_2 + 0xc)),
                      (CAnimObject *)(param_3 + *(int *)(param_1 + 0xc)));
    return;
  case 0x14:
    CTString::operator=((CTString *)(this + *(int *)(param_2 + 0xc)),
                        (CTString *)(param_3 + *(int *)(param_1 + 0xc)));
    return;
  case 0x15:
    iVar2 = *(int *)(param_2 + 0xc);
    CSoundObject::Copy((CSoundObject *)(this + iVar2),
                       (CSoundObject *)(param_3 + *(int *)(param_1 + 0xc)));
    *(CEntity **)((CSoundObject *)(this + iVar2) + 0xc) = this;
    return;
  case 0x17:
    pCVar3 = param_3 + *(int *)(param_1 + 0xc);
    pCVar1 = this + *(int *)(param_2 + 0xc);
    *(undefined4 *)pCVar1 = *(undefined4 *)pCVar3;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(pCVar3 + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(pCVar3 + 8);
    *(undefined4 *)(pCVar1 + 0xc) = *(undefined4 *)(pCVar3 + 0xc);
    return;
  case 0x18:
    pCVar1 = param_3 + *(int *)(param_1 + 0xc);
    pCVar3 = this + *(int *)(param_2 + 0xc);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pCVar1;
      pCVar1 = pCVar1 + 4;
      pCVar3 = pCVar3 + 4;
    }
    return;
  case 0x1a:
    CModelInstance::Copy
              ((CModelInstance *)(this + *(int *)(param_2 + 0xc)),
               (CModelInstance *)(param_3 + *(int *)(param_1 + 0xc)));
    return;
  default:
    return;
  }
  if ((param_4 & 1) != 0) {
    pCVar1 = FindRemappedEntityPointer(*(CEntity **)(param_3 + *(int *)(param_1 + 0xc)));
    FUN_3600db90(this + *(int *)(param_2 + 0xc),(int)pCVar1);
    return;
  }
  FUN_3600dbc0(this + *(int *)(param_2 + 0xc),(int *)(param_3 + *(int *)(param_1 + 0xc)));
  return;
}

