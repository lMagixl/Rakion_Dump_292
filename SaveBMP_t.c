
/* public: void __thiscall CImageInfo::SaveBMP_t(class CTFileName const &)const  */

void __thiscall CImageInfo::SaveBMP_t(CImageInfo *this,CTFileName *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  char *local_c4;
  int local_c0;
  undefined2 local_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  uint local_ac;
  int local_a8 [3];
  undefined2 local_9c;
  undefined2 local_9a;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  CTFileStream local_80 [20];
  char *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8cfc0  3193  ?SaveBMP_t@CImageInfo@@QBEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362127a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_a8[1] = *(int *)this;
  local_a8[2] = *(int *)(this + 4);
  local_c0 = local_a8[1] * local_a8[2];
  iVar5 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
  local_4 = 0;
  if ((iVar5 != 3) && (iVar5 != 4)) {
    local_c4 = Translate(s_ETRSUnsupported_BitsPerPixel_in_I_3622ddec,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_c4,(ThrowInfo *)&DAT_3624f688);
  }
  local_bc = 0x4d42;
  uStack_ba = 0xe;
  uStack_b8 = 0;
  uStack_b6 = 0;
  local_b4 = 0;
  uStack_b2 = 0x36;
  uStack_b0 = 0;
  local_a8[0] = 0x28;
  local_9c = 1;
  if (iVar5 == 3) {
    local_9a = 0x18;
  }
  else if (iVar5 == 4) {
    local_9a = 0x20;
  }
  local_ac = iVar5 * local_c0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  uVar3 = local_ac & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  if (uVar3 != 0) {
    local_ac = local_ac + (4 - uVar3);
  }
  local_ac = local_ac + 0x36;
  local_c4 = AllocMemory(local_ac);
  *(uint *)local_c4 = CONCAT22(uStack_ba,local_bc);
  *(uint *)(local_c4 + 4) = CONCAT22(uStack_b6,uStack_b8);
  *(uint *)(local_c4 + 8) = CONCAT22(uStack_b2,local_b4);
  *(undefined2 *)(local_c4 + 0xc) = uStack_b0;
  piVar6 = local_a8;
  piVar7 = (int *)(local_c4 + 0xe);
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  FlipBitmap(*(uchar **)(this + 0xc),(uchar *)(local_c4 + 0x36),*(long *)this,*(long *)(this + 4),2,
             (uint)(iVar5 == 4));
  pcVar2 = local_c4 + 0x36;
  iVar4 = local_c0;
  if (0 < local_c0) {
    do {
      cVar1 = *pcVar2;
      *pcVar2 = pcVar2[2];
      pcVar2[2] = cVar1;
      pcVar2 = pcVar2 + iVar5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  CTFileStream::Create_t(local_80,param_1,2);
  pcVar2 = local_c4;
  pcVar8 = local_6c;
  for (uVar3 = local_ac >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = local_ac & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  local_6c = local_6c + local_ac;
  CTFileStream::Close(local_80);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

