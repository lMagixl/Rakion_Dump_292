
/* public: void __thiscall CNet::GetRelayHeader(unsigned char const &,unsigned char *) */

void __thiscall CNet::GetRelayHeader(CNet *this,uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte bVar2;
  uchar *puVar3;
  undefined2 uVar4;
  u_short uVar5;
  AccountInfo_s *pAVar6;
  int iVar7;
  CNet *local_4;
  
                    /* 0x1045f0  2077  ?GetRelayHeader@CNet@@QAEXABEPAE@Z */
  puVar3 = param_2;
  *(IScavengerWorldNet *)(param_2 + 1) = _pRakionWorldNet[0x2e8c];
  local_4 = this;
  pAVar6 = IScavengerWorldNet::GetAccountInfo(_pRakionWorldNet);
  *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(pAVar6 + 8);
  if (*param_1 == 0xff) {
    uVar4 = 0xffff;
  }
  else if (*param_1 == 0xfe) {
    uVar4 = 0xfffe;
  }
  else {
    iVar7 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    uVar4 = *(undefined2 *)(iVar7 + 0x1ae + (uint)*param_1 * 0x37c);
  }
  bVar1 = puVar3[3];
  *(undefined2 *)(puVar3 + 4) = uVar4;
  bVar2 = puVar3[5];
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  *puVar3 = puVar3[7] ^ bVar2 ^ bVar1 ^ (byte)uVar4 ^ puVar3[2] ^ puVar3[1] ^ puVar3[6] ^ 0x34;
  local_4 = (CNet *)0x8;
  FUN_361a28f0((uint *)puVar3,(ushort *)&local_4,(short *)&param_2);
  *(undefined2 *)(this + 0x36) = *(undefined2 *)(this + 0x34);
  rand_();
  uVar5 = htons(*(u_short *)(this + 0x36));
  *(u_short *)(this + 0x36) = uVar5;
  return;
}

