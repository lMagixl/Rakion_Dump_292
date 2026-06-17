
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundObject::Fade(float,float,int) */

void __thiscall CSoundObject::Fade(CSoundObject *this,float param_1,float param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
                    /* 0xa3150  1601  ?Fade@CSoundObject@@QAEXMMH@Z */
  piVar1 = *(int **)(this + 0xc);
  if (((_pNetwork != (CNetworkLibrary *)0x0) && (*(int *)(_pNetwork + 0x14) != 0)) &&
     (piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0x90))();
    if ((iVar2 != 0) && (param_3 != 0)) {
      _DAT_362ca25c = (int)this - (int)piVar1;
      param_3 = 9;
      uVar3 = FUN_361bfd6c();
      DAT_362ca260 = (undefined1)uVar3;
      _DAT_362ca261 = param_2;
      CEntityMessage::WriteSound
                ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(piVar1 + 7),'\x06',&DAT_362ca25c,&param_3
                );
      CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
    }
  }
  *(float *)(this + 0x34) = param_1;
  *(float *)(this + 0x30) = param_2;
  ResetTimer(this,2);
  return;
}

