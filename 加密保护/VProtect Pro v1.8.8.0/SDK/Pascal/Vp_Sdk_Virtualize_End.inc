{
* 虚拟机加密结束标记
* 功能：
*   使用虚拟机加密指定代码片段
* 备注：
*   需要开始标记
*   配合Vp_Sdk_Virtualize_Begin.inc使用。
}
asm
  db  $EB, $12, $56, $50, $5F, $56, $69, $72, $74, $75, $61, $6C, $69, $7A, $65, $5F, $45, $6E, $64, $00
end;