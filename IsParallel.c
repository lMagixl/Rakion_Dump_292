
/* public: int __thiscall CAnyProjection3D::IsParallel(void) */

int __thiscall CAnyProjection3D::IsParallel(CAnyProjection3D *this)

{
                    /* 0x3950  2437  ?IsParallel@CAnyProjection3D@@QAEHXZ */
  return (uint)(*(CAnyProjection3D **)(this + 0x658) == this + 0x4b8);
}

