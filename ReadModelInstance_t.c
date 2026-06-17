
/* void __cdecl ReadModelInstance_t(class CTStream &,class CModelInstance &,int) */

void __cdecl ReadModelInstance_t(CTStream *param_1,CModelInstance *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CTStream *this;
  
                    /* 0x35d30  2970  ?ReadModelInstance_t@@YAXAAVCTStream@@AAVCModelInstance@@H@Z
                        */
  iVar1 = DAT_36225ac8;
  piVar3 = (int *)CTStream::PeekID_t(param_1);
  iVar2 = DAT_36225ad0;
  if (*piVar3 == iVar1) {
    FUN_360352b0(param_1,param_2);
    return;
  }
  piVar3 = (int *)CTStream::PeekID_t(param_1);
  iVar1 = DAT_36225ad8;
  if (*piVar3 == iVar2) {
    FUN_36035b20(param_2,param_1,param_3,(char *)0x0);
    return;
  }
  piVar3 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar3 == iVar1) {
    FUN_36035b20(param_2,param_1,param_3,(char *)0x1);
    return;
  }
  CTStream::Throw_t(this,(char *)param_1);
  return;
}

