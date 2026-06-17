
/* public: void __thiscall CTFileStream::FileCommitPage(long) */

void __thiscall CTFileStream::FileCommitPage(CTFileStream *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 *_DstBuf;
  CTSingleLock local_28 [12];
  char *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x408c0  1610  ?FileCommitPage@CTFileStream@@QAEXJ@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36210cc2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  CTSingleLock::CTSingleLock(local_28,(CTCriticalSection *)&DAT_362bf07c,1);
  local_8 = 0;
  CTStream::CommitPage((CTStream *)this,param_1);
  _DstBuf = (undefined4 *)(DAT_362bef94 * param_1 + *(int *)(this + 0xc));
  if (_DstBuf < *(undefined4 **)(this + 0x10)) {
    iVar2 = (**(code **)(*(int *)this + 0xc))();
    if ((iVar2 != 0) || (_DstBuf < *(undefined4 **)(this + 0x18))) {
      Sleep(1);
      if (*(FILE **)(this + 0x50) == (FILE *)0x0) {
        if (*(int *)(this + 0x54) < 0) {
          if (*(xFile **)(this + 100) == (xFile *)0x0) {
            if (*(xFile **)(this + 0x6c) != (xFile *)0x0) {
              uVar1 = *(undefined4 *)(this + 0x5c);
              *(undefined4 *)(this + 0x5c) = 0;
              uVar6 = (int)_DstBuf - *(int *)(this + 0xc);
              if (uVar6 < *(uint *)(this + 0x70)) {
                Xenesis::xFile::rewind(*(xFile **)(this + 0x6c));
                uVar4 = uVar6;
              }
              else {
                uVar4 = uVar6 - *(uint *)(this + 0x70);
              }
              if (uVar4 != 0) {
                Xenesis::xFile::skip(*(xFile **)(this + 0x6c),uVar4);
              }
              *(uint *)(this + 0x70) = uVar6;
              uVar6 = Xenesis::xFile::load(*(xFile **)(this + 0x6c),_DstBuf,DAT_362bef94);
              *(uint *)(this + 0x70) = *(int *)(this + 0x70) + uVar6;
              if ((uVar6 != DAT_362bef94) && ((uVar6 == 0xffffff || (uVar6 == 0)))) {
                CTFileName::CTFileName((CTFileName *)local_1c,(CTString *)(this + 0x20));
                local_8._0_1_ = 5;
                FUN_3603fc40();
                local_8 = (uint)local_8._1_3_ << 8;
                StringFree(local_1c[0]);
              }
              DAT_362befa0 = DAT_362befa0 + uVar6;
              DAT_362befa4 = DAT_362befa4 + uVar6;
              *(undefined4 *)(this + 0x5c) = uVar1;
            }
          }
          else {
            uVar1 = *(undefined4 *)(this + 0x5c);
            *(undefined4 *)(this + 0x5c) = 0;
            uVar6 = (int)_DstBuf - *(int *)(this + 0xc);
            if (uVar6 < *(uint *)(this + 0x70)) {
              Xenesis2::Foundation::File::xFile::rewind(*(xFile **)(this + 100));
              uVar4 = uVar6;
            }
            else {
              uVar4 = uVar6 - *(uint *)(this + 0x70);
            }
            if (uVar4 != 0) {
              Xenesis2::Foundation::File::xFile::skip(*(xFile **)(this + 100),uVar4);
            }
            *(uint *)(this + 0x70) = uVar6;
            uVar5 = Xenesis2::Foundation::File::xFile::load
                              (*(xFile **)(this + 100),_DstBuf,DAT_362bef94);
            *(ulong *)(this + 0x70) = *(int *)(this + 0x70) + uVar5;
            if ((uVar5 != DAT_362bef94) && ((uVar5 == 0xffffff || (uVar5 == 0)))) {
              CTFileName::CTFileName((CTFileName *)local_1c,(CTString *)(this + 0x20));
              local_8._0_1_ = 4;
              FUN_3603fc40();
              local_8 = (uint)local_8._1_3_ << 8;
              StringFree(local_1c[0]);
            }
            DAT_362befa0 = DAT_362befa0 + uVar5;
            DAT_362befa4 = DAT_362befa4 + uVar5;
            *(undefined4 *)(this + 0x5c) = uVar1;
          }
        }
        else {
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_36046b60(*(int *)(this + 0x54),_DstBuf,(int)_DstBuf - *(int *)(this + 0xc),
                       DAT_362bef94);
          local_8 = 0;
        }
      }
      else {
        fseek(*(FILE **)(this + 0x50),(int)_DstBuf - *(int *)(this + 0xc),0);
        uVar1 = *(undefined4 *)(this + 0x5c);
        *(undefined4 *)(this + 0x5c) = 0;
        sVar3 = fread(_DstBuf,1,DAT_362bef94,*(FILE **)(this + 0x50));
        if ((sVar3 != DAT_362bef94) && ((*(byte *)(*(int *)(this + 0x50) + 0xc) & 0x20) != 0)) {
          CTFileName::CTFileName((CTFileName *)local_1c,(CTString *)(this + 0x20));
          local_8._0_1_ = 1;
          FUN_3603fc40();
          local_8 = (uint)local_8._1_3_ << 8;
          StringFree(local_1c[0]);
        }
        DAT_362befa0 = DAT_362befa0 + sVar3;
        DAT_362befa4 = DAT_362befa4 + sVar3;
        *(undefined4 *)(this + 0x5c) = uVar1;
      }
      if ((_pSound != (CSoundLibrary *)0x0) && (*(int *)(_pSound + 0x48) != 0)) {
        CSoundLibrary::UpdateSounds(_pSound);
      }
    }
  }
  local_8 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_28);
  ExceptionList = local_10;
  return;
}

