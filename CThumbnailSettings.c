
/* public: __thiscall CThumbnailSettings::CThumbnailSettings(void) */

CThumbnailSettings * __thiscall CThumbnailSettings::CThumbnailSettings(CThumbnailSettings *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa89e0  281  ??0CThumbnailSettings@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362134c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x68) = pcVar1;
  *(undefined4 *)(this + 0x6c) = 0;
  local_4 = 0;
  CModelRenderPrefs::CModelRenderPrefs((CModelRenderPrefs *)(this + 0x70));
  *(undefined4 *)this = 0;
  ExceptionList = local_c;
  return this;
}

