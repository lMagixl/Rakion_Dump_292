
/* public: void __thiscall CImageInfo::SaveTGA_t(class CTFileName const &)const  */

void __thiscall CImageInfo::SaveTGA_t(CImageInfo *this,CTFileName *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *local_88;
  int local_84;
  CTFileStream local_80 [20];
  undefined4 *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8ce50  3199  ?SaveTGA_t@CImageInfo@@QBEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212791;
  local_c = ExceptionList;
  iVar7 = *(int *)this;
  iVar2 = *(int *)(this + 4);
  ExceptionList = &local_c;
  local_84 = iVar7 * iVar2;
  CTFileStream::CTFileStream(local_80);
  iVar9 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
  local_4 = 0;
  if ((iVar9 != 3) && (iVar9 != 4)) {
    local_88 = Translate(s_ETRSUnsupported_BitsPerPixel_in_I_3622ddb8,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_88,(ThrowInfo *)&DAT_3624f688);
  }
  uVar6 = iVar9 * iVar7 * iVar2 + 0x12;
  puVar3 = AllocMemory(uVar6);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined2 *)(puVar3 + 4) = 0;
  *(undefined2 *)(puVar3 + 3) = *(undefined2 *)this;
  *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)(this + 4);
  *(CImageInfo *)(puVar3 + 4) = this[8];
  *(undefined1 *)((int)puVar3 + 2) = 2;
  FlipBitmap(*(uchar **)(this + 0xc),(uchar *)((int)puVar3 + 0x12),*(long *)this,*(long *)(this + 4)
             ,2,(uint)(iVar9 == 4));
  puVar4 = (undefined1 *)((int)puVar3 + 0x12);
  iVar7 = local_84;
  if (0 < local_84) {
    do {
      uVar1 = *puVar4;
      *puVar4 = puVar4[2];
      puVar4[2] = uVar1;
      puVar4 = puVar4 + iVar9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  CTFileStream::Create_t(local_80,param_1,2);
  puVar8 = puVar3;
  puVar10 = local_6c;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  local_6c = (undefined4 *)((int)local_6c + uVar6);
  CTFileStream::Close(local_80);
  FreeMemory(puVar3);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

