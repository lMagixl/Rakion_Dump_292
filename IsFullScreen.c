
/* public: int __thiscall CDisplayMode::IsFullScreen(void) */

int __thiscall CDisplayMode::IsFullScreen(CDisplayMode *this)

{
                    /* 0x64800  2397  ?IsFullScreen@CDisplayMode@@QAEHXZ */
  if ((*(int *)this != 0) && (*(int *)(this + 4) != 0)) {
    return 1;
  }
  return 0;
}

