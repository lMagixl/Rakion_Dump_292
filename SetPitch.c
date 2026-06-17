
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundObject::SetPitch(float,int) */

void __thiscall CSoundObject::SetPitch(CSoundObject *this,float param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  
                    /* 0xa2c60  3552  ?SetPitch@CSoundObject@@QAEXMH@Z */
  fVar1 = *(float *)(this + 0x3c);
  *(float *)(this + 0x3c) = param_1;
  piVar2 = *(int **)(this + 0xc);
  if ((((_DAT_362280f0 < ABS(fVar1 - param_1)) && (_pNetwork != (CNetworkLibrary *)0x0)) &&
      (*(int *)(_pNetwork + 0x14) != 0)) && (piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 0x90))();
    if ((iVar3 != 0) && (param_2 != 0)) {
      uVar4 = FUN_361bfd6c();
      DAT_362ca260 = (undefined1)uVar4;
      _DAT_362ca25c = (int)this - (int)piVar2;
      param_1 = 7.00649e-45;
      CEntityMessage::WriteSound
                ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(piVar2 + 7),'\x04',&DAT_362ca25c,
                 (long *)&param_1);
      CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
    }
  }
  return;
}

