	.section .text
.LNDBG_TX:
# mark_description "Intel(R) C++ Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 14.0.3.174 Build 20140";
# mark_description "422";
# mark_description "-mavx -vec-report6 -std=c++11 -S";
	.file "timer.cpp"
	.text
..TXTST0:
L__routine_start_main_0:
# -- Begin  main
# mark_begin;
       .align    16,0x90
	.globl main
main:
..B1.1:                         # Preds ..B1.0
..___tag_value_main.1:                                          #10.11
..LN0:
  .file   1 "timer.cpp"
   .loc    1  10  is_stmt 1
        pushq     %rbp                                          #10.11
..___tag_value_main.3:                                          #
..LN1:
        movq      %rsp, %rbp                                    #10.11
..___tag_value_main.4:                                          #
..LN2:
        andq      $-128, %rsp                                   #10.11
..LN3:
        pushq     %r12                                          #10.11
..LN4:
        pushq     %r13                                          #10.11
..LN5:
        pushq     %r14                                          #10.11
..LN6:
        pushq     %r15                                          #10.11
..LN7:
        pushq     %rbx                                          #10.11
..LN8:
        subq      $600, %rsp                                    #10.11
..LN9:
        movq      $0x000000000, %rsi                            #10.11
..LN10:
        movl      $3, %edi                                      #10.11
..LN11:
        call      __intel_new_feature_proc_init                 #10.11
..___tag_value_main.6:                                          #
..LN12:
                                # LOE
..B1.41:                        # Preds ..B1.1
..LN13:
        vstmxcsr  (%rsp)                                        #10.11
..LN14:
   .loc    1  14  is_stmt 1
        movq      $0x3ff0000000000000, %r15                     #14.35
..LN15:
        movq      $0x4000000000000000, %r14                     #14.35
..LN16:
   .loc    1  10  is_stmt 1
        orl       $32832, (%rsp)                                #10.11
..LN17:
   .loc    1  14  is_stmt 1
        movq      $0x4008000000000000, %r13                     #14.35
..LN18:
        movq      $0x4010000000000000, %r12                     #14.35
..LN19:
        movq      $0x4014000000000000, %rbx                     #14.35
..LN20:
        movq      $0x4018000000000000, %rax                     #14.35
..LN21:
   .loc    1  10  is_stmt 1
        vldmxcsr  (%rsp)                                        #10.11
..LN22:
   .loc    1  14  is_stmt 1
        movq      %r15, 256(%rsp)                               #14.35
..LN23:
        movq      %r14, 264(%rsp)                               #14.35
..LN24:
        movq      %r13, 272(%rsp)                               #14.35
..LN25:
        movq      %r12, 280(%rsp)                               #14.35
..LN26:
        movq      %rbx, 288(%rsp)                               #14.35
..LN27:
        movq      %rax, 296(%rsp)                               #14.35
..LN28:
   .loc    1  16  is_stmt 1
        movq      %r15, 320(%rsp)                               #16.35
..LN29:
        movq      %r14, 328(%rsp)                               #16.35
..LN30:
        movq      %r13, 336(%rsp)                               #16.35
..LN31:
        movq      %r12, 344(%rsp)                               #16.35
..LN32:
        movq      %rbx, 352(%rsp)                               #16.35
..LN33:
        movq      %rax, 360(%rsp)                               #16.35
..LN34:
   .loc    1  17  is_stmt 1
        vpxor     %xmm0, %xmm0, %xmm0                           #17.41
..LN35:
        vmovups   %xmm0, 400(%rsp)                              #17.41
..LN36:
        vmovups   %xmm0, 416(%rsp)                              #17.41
..LN37:
        vmovups   %xmm0, 384(%rsp)                              #17.41
..LN38:
                                # LOE rbx r12 r13 r14 r15
..B1.2:                         # Preds ..B1.41
..LN39:
   .loc    1  20  is_stmt 1
        movq      $0x4018000000000000, %rax                     #20.28
..LN40:
   .loc    1  23  is_stmt 1
        vpxor     %xmm0, %xmm0, %xmm0                           #23.27
..LN41:
   .loc    1  22  is_stmt 1
        movq      %r15, 448(%rsp)                               #22.28
..LN42:
        movq      %r14, 456(%rsp)                               #22.28
..LN43:
        movq      %r13, 464(%rsp)                               #22.28
..LN44:
        movq      %r12, 472(%rsp)                               #22.28
..LN45:
        movq      %rbx, 480(%rsp)                               #22.28
..LN46:
        movq      %rax, 488(%rsp)                               #22.28
..LN47:
   .loc    1  23  is_stmt 1
        vmovups   %xmm0, 16(%rsp)                               #23.27
..LN48:
        vmovups   %xmm0, 32(%rsp)                               #23.27
..LN49:
        vmovups   %xmm0, (%rsp)                                 #23.27
..LN50:
                                # LOE rbx r12 r13 r14 r15
..B1.3:                         # Preds ..B1.2
..LN51:
   .loc    1  27  is_stmt 1
        movq      __$U3.0.17(%rip), %rax                        #27.53
..LN52:
        movq      %rax, 16(%rsp)                                #27.53
..LN53:
        movq      %rax, 24(%rsp)                                #27.60
..___tag_value_main.11:                                         #28.10
..LN54:
   .loc    1  28  is_stmt 1
        call      _ZNSt6chrono3_V212system_clock3nowEv          #28.10
..___tag_value_main.12:                                         #
..LN55:
                                # LOE rax rbx r12 r13 r14 r15
..B1.42:                        # Preds ..B1.3
..LN56:
        movq      %rax, 16(%rsp)                                #28.10
..LN57:
                                # LOE rbx r12 r13 r14 r15
..B1.4:                         # Preds ..B1.42
..LN58:
   .loc    1  36  is_stmt 1
        vmovupd   256(%rsp), %ymm3                              #36.4
..LN59:
   .loc    1  38  is_stmt 1
        vmovupd   320(%rsp), %ymm5                              #38.4
..LN60:
   .loc    1  39  is_stmt 1
        vmovupd   384(%rsp), %ymm7                              #39.6
..LN61:
   .loc    1  33  is_stmt 1
        vmovupd   448(%rsp), %xmm0                              #33.16
..LN62:
        vmovupd   480(%rsp), %xmm2                              #33.16
..LN63:
   .loc    1  36  is_stmt 1
        vmovupd   288(%rsp), %xmm4                              #36.4
..LN64:
   .loc    1  38  is_stmt 1
        vmovupd   352(%rsp), %xmm6                              #38.4
..LN65:
   .loc    1  39  is_stmt 1
        vmovupd   416(%rsp), %xmm8                              #39.6
..LN66:
   .loc    1  33  is_stmt 1
        vmovupd   %xmm2, (%rsp)                                 #33.16
..LN67:
   .loc    1  36  is_stmt 1
        vmovupd   %ymm3, 64(%rsp)                               #36.2
..LN68:
        vmovupd   %xmm4, 96(%rsp)                               #36.2
..LN69:
   .loc    1  38  is_stmt 1
        vmovupd   %xmm6, 224(%rsp)                              #38.2
..LN70:
   .loc    1  39  is_stmt 1
        vmovupd   %xmm8, 160(%rsp)                              #39.2
..LN71:
   .loc    1  38  is_stmt 1
        vmovupd   %ymm5, 192(%rsp)                              #38.2
..LN72:
   .loc    1  39  is_stmt 1
        vmovupd   %ymm7, 128(%rsp)                              #39.2
..LN73:
   .loc    1  33  is_stmt 1
        vinsertf128 $1, 464(%rsp), %ymm0, %ymm1                 #33.16
..LN74:
        vmovups   %ymm1, 32(%rsp)                               #33.16
..LN75:
                                # LOE rbx r12 r13 r14 r15
..B1.44:                        # Preds ..B1.4
# Begin ASM
..LN76:
   .loc    1  41  is_stmt 1
# #start simd
..LN77:
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.43:                        # Preds ..B1.44
..LN78:
   .loc    1  46  is_stmt 1
        vmovupd   128(%rsp), %ymm9                              #46.3
..LN79:
   .loc    1  44  is_stmt 1
        xorl      %eax, %eax                                    #44.2
..LN80:
   .loc    1  46  is_stmt 1
        vmovupd   160(%rsp), %xmm5                              #46.3
..LN81:
   .loc    1  44  is_stmt 1
        vmovups   80(%rsp), %xmm4                               #44.2
..LN82:
        vmovups   96(%rsp), %xmm3                               #44.2
..LN83:
        vmovups   112(%rsp), %xmm2                              #44.2
..LN84:
        vmovups   64(%rsp), %xmm1                               #44.2
..LN85:
        vmovups   208(%rsp), %xmm8                              #44.2
..LN86:
        vmovups   224(%rsp), %xmm7                              #44.2
..LN87:
        vmovups   240(%rsp), %xmm6                              #44.2
..LN88:
        vmovups   192(%rsp), %xmm0                              #44.2
..LN89:
        vmovupd   (%rsp), %xmm15                                #44.2
..LN90:
        vmovupd   %ymm9, 384(%rsp)                              #44.2
..LN91:
                                # LOE rbx r12 r13 r14 r15 eax xmm0 xmm1 xmm2 xmm3 xmm4 xmm5 xmm6 xmm7 xmm8 xmm15
..B1.5:                         # Preds ..B1.5 ..B1.43
..LN92:
   .loc    1  46  is_stmt 1
        vzeroupper                                              #46.14
..LN93:
   .loc    1  44  is_stmt 1
        incl      %eax                                          #44.2
..LN94:
   .loc    1  46  is_stmt 1
        vmovups   %xmm4, 272(%rsp)                              #46.14
..LN95:
        vmovups   %xmm1, 256(%rsp)                              #46.14
..LN96:
        vmovups   %xmm3, 288(%rsp)                              #46.14
..LN97:
        vmovups   %xmm2, 304(%rsp)                              #46.14
..LN98:
        vmovupd   256(%rsp), %ymm9                              #46.14
..LN99:
        vmovups   %xmm8, 336(%rsp)                              #46.14
..LN100:
        vmovups   %xmm0, 320(%rsp)                              #46.14
..LN101:
        vmovups   %xmm7, 352(%rsp)                              #46.14
..LN102:
        vmovups   %xmm6, 368(%rsp)                              #46.14
..LN103:
        vmulpd    %xmm7, %xmm3, %xmm11                          #46.14
..LN104:
        vmulpd    320(%rsp), %ymm9, %ymm10                      #46.14
..LN105:
        vmulpd    %xmm15, %xmm11, %xmm14                        #46.18
..LN106:
        vmulpd    32(%rsp), %ymm10, %ymm12                      #46.18
..LN107:
        vaddpd    %xmm14, %xmm5, %xmm5                          #46.7
..LN108:
        vaddpd    384(%rsp), %ymm12, %ymm13                     #46.7
..LN109:
        vmovupd   %ymm13, 384(%rsp)                             #46.7
..LN110:
   .loc    1  44  is_stmt 1
        cmpl      $1000000000, %eax                             #44.2
..LN111:
        jb        ..B1.5        # Prob 99%                      #44.2
..LN112:
                                # LOE rbx r12 r13 r14 r15 eax xmm0 xmm1 xmm2 xmm3 xmm4 xmm5 xmm6 xmm7 xmm8 xmm15
..B1.6:                         # Preds ..B1.5
..LN113:
        vmovupd   384(%rsp), %ymm9                              #
..LN114:
   .loc    1  46  is_stmt 1
        vmovupd   %xmm5, 160(%rsp)                              #46.3
..LN115:
        vmovupd   %ymm9, 128(%rsp)                              #46.3
..LN116:
                                # LOE rbx r12 r13 r14 r15
..B1.47:                        # Preds ..B1.6
# Begin ASM
..LN117:
   .loc    1  49  is_stmt 1
# #end simd
..LN118:
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.46:                        # Preds ..B1.47
..LN119:
   .loc    1  51  is_stmt 1
        vzeroupper                                              #51.8
..___tag_value_main.13:                                         #51.8
..LN120:
        call      _ZNSt6chrono3_V212system_clock3nowEv          #51.8
..___tag_value_main.14:                                         #
..LN121:
                                # LOE rax rbx r12 r13 r14 r15
..B1.45:                        # Preds ..B1.46
..LN122:
        movq      %rax, 24(%rsp)                                #51.8
..LN123:
                                # LOE rbx r12 r13 r14 r15
..B1.7:                         # Preds ..B1.45
..LN124:
   .loc    1  52  is_stmt 1
        movq      24(%rsp), %rax                                #52.50
..LN125:
   .loc    1  55  is_stmt 1
        movl      $_ZSt4cout, %edi                              #55.11
..LN126:
   .loc    1  52  is_stmt 1
        movq      16(%rsp), %rdx                                #52.54
..LN127:
   .loc    1  55  is_stmt 1
        movl      $.L_2__STRING.3, %esi                         #55.11
..LN128:
   .loc    1  52  is_stmt 1
        movq      %rax, 8(%rsp)                                 #52.50
..LN129:
        movq      %rdx, (%rsp)                                  #52.54
..___tag_value_main.15:                                         #55.11
..LN130:
   .loc    1  55  is_stmt 1
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #55.11
..___tag_value_main.16:                                         #
..LN131:
                                # LOE rax rbx r12 r13 r14 r15
..B1.48:                        # Preds ..B1.7
..LN132:
        movq      %rax, %rdi                                    #55.11
..LN133:
                                # LOE rbx rdi r12 r13 r14 r15
..B1.8:                         # Preds ..B1.48
..LN134:
        movq      8(%rsp), %rax                                 #55.30
..LN135:
        vxorpd    %xmm0, %xmm0, %xmm0                           #55.30
..LN136:
        subq      (%rsp), %rax                                  #55.30
..LN137:
        vcvtsi2sdq %rax, %xmm0, %xmm0                           #55.30
..LN138:
        vdivsd    .L_2il0floatpacket.227(%rip), %xmm0, %xmm0    #55.30
..___tag_value_main.17:                                         #55.30
..LN139:
        call      _ZNSolsEd                                     #55.30
..___tag_value_main.18:                                         #
..LN140:
                                # LOE rax rbx r12 r13 r14 r15
..B1.9:                         # Preds ..B1.8
..LN141:
        movl      $.L_2__STRING.4, %esi                         #55.56
..LN142:
        movq      %rax, %rdi                                    #55.56
..___tag_value_main.19:                                         #55.56
..LN143:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #55.56
..___tag_value_main.20:                                         #
..LN144:
                                # LOE rbx r12 r13 r14 r15
..B1.10:                        # Preds ..B1.9
..LN145:
   .loc    1  57  is_stmt 1
        movl      $.L_2__STRING.0, %esi                         #57.11
..LN146:
        vmovups   144(%rsp), %xmm0                              #57.11
..LN147:
        movl      $_ZSt4cout, %edi                              #57.11
..LN148:
        vmovups   128(%rsp), %xmm2                              #57.11
..LN149:
        vmovups   %xmm0, 80(%rsp)                               #57.11
..LN150:
        vmovups   %xmm2, 64(%rsp)                               #57.11
..LN151:
        vmovupd   64(%rsp), %ymm3                               #57.11
..LN152:
        vmovups   160(%rsp), %xmm4                              #57.11
..LN153:
        vmovups   176(%rsp), %xmm1                              #57.11
..LN154:
        vmovupd   %xmm4, 32(%rsp)                               #57.11
..LN155:
        vmovups   %xmm4, 96(%rsp)                               #57.11
..LN156:
        vmovups   %xmm1, 112(%rsp)                              #57.11
..LN157:
        vmovupd   %xmm3, (%rsp)                                 #57.11
..LN158:
        vextractf128 $1, %ymm3, 16(%rsp)                        #57.11
..LN159:
        vzeroupper                                              #57.11
..___tag_value_main.21:                                         #57.11
..LN160:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.22:                                         #
..LN161:
                                # LOE rax rbx r12 r13 r14 r15
..B1.11:                        # Preds ..B1.10
..LN162:
        movq      %rax, %rdi                                    #57.11
..LN163:
        vmovsd    (%rsp), %xmm0                                 #57.11
..___tag_value_main.23:                                         #57.11
..LN164:
        call      _ZNSolsEd                                     #57.11
..___tag_value_main.24:                                         #
..LN165:
                                # LOE rax rbx r12 r13 r14 r15
..B1.12:                        # Preds ..B1.11
..LN166:
        movl      $.L_2__STRING.1, %esi                         #57.11
..LN167:
        movq      %rax, %rdi                                    #57.11
..___tag_value_main.25:                                         #57.11
..LN168:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.26:                                         #
..LN169:
                                # LOE rax rbx r12 r13 r14 r15
..B1.13:                        # Preds ..B1.12
..LN170:
        movq      %rax, %rdi                                    #57.11
..LN171:
        vmovsd    8(%rsp), %xmm0                                #57.11
..___tag_value_main.27:                                         #57.11
..LN172:
        call      _ZNSolsEd                                     #57.11
..___tag_value_main.28:                                         #
..LN173:
                                # LOE rax rbx r12 r13 r14 r15
..B1.14:                        # Preds ..B1.13
..LN174:
        movq      %rax, %rdi                                    #57.11
..LN175:
        movl      $.L_2__STRING.1, %esi                         #57.11
..___tag_value_main.29:                                         #57.11
..LN176:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.30:                                         #
..LN177:
                                # LOE rax rbx r12 r13 r14 r15
..B1.15:                        # Preds ..B1.14
..LN178:
        movq      %rax, %rdi                                    #57.11
..LN179:
        vmovsd    16(%rsp), %xmm0                               #57.11
..___tag_value_main.31:                                         #57.11
..LN180:
        call      _ZNSolsEd                                     #57.11
..___tag_value_main.32:                                         #
..LN181:
                                # LOE rax rbx r12 r13 r14 r15
..B1.16:                        # Preds ..B1.15
..LN182:
        movq      %rax, %rdi                                    #57.11
..LN183:
        movl      $.L_2__STRING.1, %esi                         #57.11
..___tag_value_main.33:                                         #57.11
..LN184:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.34:                                         #
..LN185:
                                # LOE rax rbx r12 r13 r14 r15
..B1.17:                        # Preds ..B1.16
..LN186:
        movq      %rax, %rdi                                    #57.11
..LN187:
        vmovsd    24(%rsp), %xmm0                               #57.11
..___tag_value_main.35:                                         #57.11
..LN188:
        call      _ZNSolsEd                                     #57.11
..___tag_value_main.36:                                         #
..LN189:
                                # LOE rax rbx r12 r13 r14 r15
..B1.18:                        # Preds ..B1.17
..LN190:
        movq      %rax, %rdi                                    #57.11
..LN191:
        movl      $.L_2__STRING.1, %esi                         #57.11
..___tag_value_main.37:                                         #57.11
..LN192:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.38:                                         #
..LN193:
                                # LOE rax rbx r12 r13 r14 r15
..B1.19:                        # Preds ..B1.18
..LN194:
        movq      %rax, %rdi                                    #57.11
..LN195:
        vmovsd    32(%rsp), %xmm0                               #57.11
..___tag_value_main.39:                                         #57.11
..LN196:
        call      _ZNSolsEd                                     #57.11
..___tag_value_main.40:                                         #
..LN197:
                                # LOE rax rbx r12 r13 r14 r15
..B1.20:                        # Preds ..B1.19
..LN198:
        movq      %rax, %rdi                                    #57.11
..LN199:
        movl      $.L_2__STRING.1, %esi                         #57.11
..___tag_value_main.41:                                         #57.11
..LN200:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.42:                                         #
..LN201:
                                # LOE rax rbx r12 r13 r14 r15
..B1.21:                        # Preds ..B1.20
..LN202:
        movq      %rax, %rdi                                    #57.11
..LN203:
        vmovsd    40(%rsp), %xmm0                               #57.11
..___tag_value_main.43:                                         #57.11
..LN204:
        call      _ZNSolsEd                                     #57.11
..___tag_value_main.44:                                         #
..LN205:
                                # LOE rax rbx r12 r13 r14 r15
..B1.22:                        # Preds ..B1.21
..LN206:
        movl      $.L_2__STRING.2, %esi                         #57.11
..LN207:
        movq      %rax, %rdi                                    #57.11
..___tag_value_main.45:                                         #57.11
..LN208:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #57.11
..___tag_value_main.46:                                         #
..LN209:
                                # LOE rbx r12 r13 r14 r15
..B1.23:                        # Preds ..B1.22
..LN210:
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #57.16
..LN211:
        movl      $_ZSt4cout, %edi                              #57.16
..___tag_value_main.47:                                         #57.16
..LN212:
        call      _ZNSolsEPFRSoS_E                              #57.16
..___tag_value_main.48:                                         #
..LN213:
                                # LOE rbx r12 r13 r14 r15
..B1.24:                        # Preds ..B1.23
..LN214:
   .loc    1  62  is_stmt 1
        movq      $0x4018000000000000, %rax                     #62.21
..LN215:
   .loc    1  65  is_stmt 1
..LN216:
   .loc    1  62  is_stmt 1
        movq      %r15, 16(%rsp)                                #62.21
..LN217:
        movq      %r14, 24(%rsp)                                #62.21
..LN218:
   .loc    1  65  is_stmt 1
        vpxor     %xmm0, %xmm0, %xmm0                           #65.13
..LN219:
   .loc    1  62  is_stmt 1
        movq      %r13, 32(%rsp)                                #62.21
..LN220:
        movq      %r12, 40(%rsp)                                #62.21
..LN221:
        movq      %rbx, 48(%rsp)                                #62.21
..LN222:
        movq      %rax, 56(%rsp)                                #62.21
..LN223:
   .loc    1  63  is_stmt 1
        movq      %r15, 64(%rsp)                                #63.14
..LN224:
        movq      %r14, 72(%rsp)                                #63.14
..LN225:
        movq      %r13, 80(%rsp)                                #63.14
..LN226:
        movq      %r12, 88(%rsp)                                #63.14
..LN227:
        movq      %rbx, 96(%rsp)                                #63.14
..LN228:
        movq      %rax, 104(%rsp)                               #63.14
..LN229:
   .loc    1  64  is_stmt 1
        movq      %r15, 128(%rsp)                               #64.21
..LN230:
        movq      %r14, 136(%rsp)                               #64.21
..LN231:
        movq      %r13, 144(%rsp)                               #64.21
..LN232:
        movq      %r12, 152(%rsp)                               #64.21
..LN233:
        movq      %rbx, 160(%rsp)                               #64.21
..LN234:
        movq      %rax, 168(%rsp)                               #64.21
..LN235:
   .loc    1  65  is_stmt 1
        vmovups   %xmm0, 208(%rsp)                              #65.13
..LN236:
        vmovups   %xmm0, 224(%rsp)                              #65.13
..LN237:
        vmovups   %xmm0, 192(%rsp)                              #65.13
..LN238:
                                # LOE
..B1.25:                        # Preds ..B1.24
..LN239:
   .loc    1  67  is_stmt 1
        movq      __$U3.0.17(%rip), %rax                        #67.53
..LN240:
        movq      %rax, (%rsp)                                  #67.53
..LN241:
        movq      %rax, 8(%rsp)                                 #67.60
..___tag_value_main.49:                                         #68.10
..LN242:
   .loc    1  68  is_stmt 1
        call      _ZNSt6chrono3_V212system_clock3nowEv          #68.10
..___tag_value_main.50:                                         #
..LN243:
                                # LOE rax
..B1.62:                        # Preds ..B1.25
..LN244:
        movq      %rax, (%rsp)                                  #68.10
..LN245:
                                # LOE
..B1.26:                        # Preds ..B1.62
# Begin ASM
..LN246:
   .loc    1  70  is_stmt 1
# #second
..LN247:
# End ASM
                                # LOE
..B1.63:                        # Preds ..B1.26
..LN248:
   .loc    1  73  is_stmt 1
        xorl      %eax, %eax                                    #73.3
..LN249:
   .loc    1  74  is_stmt 1
..LN250:
   .loc    1  73  is_stmt 1
        xorl      %r13d, %r13d                                  #73.3
..LN251:
                                # LOE rax r13
..B1.27:                        # Preds ..B1.29 ..B1.63
..LN252:
   .loc    1  74  is_stmt 1
        vmovsd    16(%rsp,%rax,8), %xmm7                        #74.28
..LN253:
..LN254:
   .loc    1  72  is_stmt 1
        xorl      %edx, %edx                                    #72.9
..LN255:
   .loc    1  74  is_stmt 1
        vmulsd    64(%rsp,%rax,8), %xmm7, %xmm10                #74.28
..LN256:
        vmulsd    128(%rsp,%rax,8), %xmm10, %xmm11              #74.28
..LN257:
        vmovddup  %xmm11, %xmm12                                #74.28
..LN258:
        vmovsd    192(%rsp,%rax,8), %xmm5                       #74.4
..LN259:
        vxorpd    %ymm9, %ymm9, %ymm9                           #74.4
..LN260:
        vxorpd    %ymm8, %ymm8, %ymm8                           #74.4
..LN261:
        vxorpd    %ymm0, %ymm0, %ymm0                           #74.4
..LN262:
        vxorpd    %ymm3, %ymm3, %ymm3                           #74.4
..LN263:
        vxorpd    %ymm1, %ymm1, %ymm1                           #74.4
..LN264:
        vxorpd    %ymm4, %ymm4, %ymm4                           #74.4
..LN265:
        vxorpd    %ymm2, %ymm2, %ymm2                           #74.4
..LN266:
        vxorpd    %ymm6, %ymm6, %ymm6                           #74.4
..LN267:
        vinsertf128 $1, %xmm12, %ymm12, %ymm7                   #74.28
..LN268:
                                # LOE rax r13 edx xmm5 ymm0 ymm1 ymm2 ymm3 ymm4 ymm6 ymm7 ymm8 ymm9
..B1.28:                        # Preds ..B1.28 ..B1.27
..LN269:
   .loc    1  72  is_stmt 1
        addl      $32, %edx                                     #72.9
..LN270:
   .loc    1  74  is_stmt 1
        vaddpd    %ymm7, %ymm9, %ymm9                           #74.4
..LN271:
        vaddpd    %ymm8, %ymm7, %ymm8                           #74.4
..LN272:
        vaddpd    %ymm0, %ymm7, %ymm0                           #74.4
..LN273:
        vaddpd    %ymm3, %ymm7, %ymm3                           #74.4
..LN274:
        vaddpd    %ymm1, %ymm7, %ymm1                           #74.4
..LN275:
        vaddpd    %ymm4, %ymm7, %ymm4                           #74.4
..LN276:
        vaddpd    %ymm2, %ymm7, %ymm2                           #74.4
..LN277:
        vaddpd    %ymm6, %ymm7, %ymm6                           #74.4
..LN278:
   .loc    1  72  is_stmt 1
        cmpl      $1000000000, %edx                             #72.9
..LN279:
        jb        ..B1.28       # Prob 87%                      #72.9
..LN280:
                                # LOE rax r13 edx xmm5 ymm0 ymm1 ymm2 ymm3 ymm4 ymm6 ymm7 ymm8 ymm9
..B1.29:                        # Preds ..B1.28
..LN281:
   .loc    1  74  is_stmt 1
        vaddpd    %ymm8, %ymm9, %ymm7                           #74.4
..LN282:
        vaddpd    %ymm3, %ymm0, %ymm0                           #74.4
..LN283:
        vaddpd    %ymm4, %ymm1, %ymm1                           #74.4
..LN284:
        vaddpd    %ymm6, %ymm2, %ymm2                           #74.4
..LN285:
        vaddpd    %ymm0, %ymm7, %ymm3                           #74.4
..LN286:
        vaddpd    %ymm2, %ymm1, %ymm4                           #74.4
..LN287:
        vaddpd    %ymm4, %ymm3, %ymm6                           #74.4
..LN288:
        vextractf128 $1, %ymm6, %xmm8                           #74.4
..LN289:
        vaddpd    %xmm8, %xmm6, %xmm9                           #74.4
..LN290:
        vunpckhpd %xmm9, %xmm9, %xmm10                          #74.4
..LN291:
        vaddsd    %xmm10, %xmm9, %xmm11                         #74.4
..LN292:
        vaddsd    %xmm5, %xmm11, %xmm5                          #74.4
..LN293:
        vmovsd    %xmm5, 192(%rsp,%rax,8)                       #74.4
..LN294:
   .loc    1  73  is_stmt 1
        incq      %rax                                          #73.3
..LN295:
        cmpq      $8, %rax                                      #73.3
..LN296:
        jb        ..B1.27       # Prob 100%                     #73.3
..LN297:
                                # LOE rax r13
..B1.30:                        # Preds ..B1.29
# Begin ASM
..LN298:
   .loc    1  78  is_stmt 1
# #end
..LN299:
# End ASM
                                # LOE r13
..B1.65:                        # Preds ..B1.30
..LN300:
   .loc    1  80  is_stmt 1
        vzeroupper                                              #80.8
..___tag_value_main.51:                                         #80.8
..LN301:
        call      _ZNSt6chrono3_V212system_clock3nowEv          #80.8
..___tag_value_main.52:                                         #
..LN302:
                                # LOE rax r13
..B1.64:                        # Preds ..B1.65
..LN303:
        movq      %rax, 8(%rsp)                                 #80.8
..LN304:
                                # LOE r13
..B1.31:                        # Preds ..B1.64
..LN305:
   .loc    1  83  is_stmt 1
        movl      $_ZSt4cout, %edi                              #83.18
..LN306:
        movl      $.L_2__STRING.3, %esi                         #83.18
..LN307:
   .loc    1  81  is_stmt 1
        movq      8(%rsp), %r12                                 #81.50
..LN308:
        movq      (%rsp), %rbx                                  #81.54
..___tag_value_main.53:                                         #83.18
..LN309:
   .loc    1  83  is_stmt 1
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #83.18
..___tag_value_main.54:                                         #
..LN310:
                                # LOE rax rbx r12 r13
..B1.32:                        # Preds ..B1.31
..LN311:
        subq      %rbx, %r12                                    #83.37
..LN312:
        vxorpd    %xmm0, %xmm0, %xmm0                           #83.37
..LN313:
        vcvtsi2sdq %r12, %xmm0, %xmm0                           #83.37
..LN314:
        movq      %rax, %rdi                                    #83.37
..LN315:
        vdivsd    .L_2il0floatpacket.227(%rip), %xmm0, %xmm0    #83.37
..___tag_value_main.55:                                         #83.37
..LN316:
        call      _ZNSolsEd                                     #83.37
..___tag_value_main.56:                                         #
..LN317:
                                # LOE rax r13
..B1.33:                        # Preds ..B1.32
..LN318:
        movq      %rax, %rdi                                    #83.63
..LN319:
        movl      $.L_2__STRING.4, %esi                         #83.63
..___tag_value_main.57:                                         #83.63
..LN320:
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #83.63
..___tag_value_main.58:                                         #
..LN321:
                                # LOE r13
..B1.34:                        # Preds ..B1.33
..LN322:
   .loc    1  85  is_stmt 1
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %ebx #85.12
..LN323:
        movl      $_ZSt4cout, %r12d                             #85.12
..LN324:
                                # LOE rbx r12 r13
..B1.35:                        # Preds ..B1.37 ..B1.34
..LN325:
   .loc    1  86  is_stmt 1
        movq      %r12, %rdi                                    #86.12
..LN326:
        vmovsd    192(%rsp,%r13,8), %xmm0                       #86.12
..___tag_value_main.59:                                         #86.12
..LN327:
        call      _ZNSolsEd                                     #86.12
..___tag_value_main.60:                                         #
..LN328:
                                # LOE rax rbx r12 r13
..B1.36:                        # Preds ..B1.35
..LN329:
        movq      %rax, %rdi                                    #86.18
..LN330:
        movq      %rbx, %rsi                                    #86.18
..___tag_value_main.61:                                         #86.18
..LN331:
        call      _ZNSolsEPFRSoS_E                              #86.18
..___tag_value_main.62:                                         #
..LN332:
                                # LOE rbx r12 r13
..B1.37:                        # Preds ..B1.36
..LN333:
   .loc    1  85  is_stmt 1
        incq      %r13                                          #85.24
..LN334:
        cmpq      $8, %r13                                      #85.21
..LN335:
        jl        ..B1.35       # Prob 87%                      #85.21
..LN336:
                                # LOE rbx r12 r13
..B1.38:                        # Preds ..B1.37
..LN337:
   .loc    1  91  is_stmt 1
        xorl      %eax, %eax                                    #91.1
..LN338:
        addq      $600, %rsp                                    #91.1
..___tag_value_main.63:                                         #91.1
..LN339:
        popq      %rbx                                          #91.1
..___tag_value_main.64:                                         #91.1
..LN340:
        popq      %r15                                          #91.1
..___tag_value_main.65:                                         #91.1
..LN341:
        popq      %r14                                          #91.1
..___tag_value_main.66:                                         #91.1
..LN342:
        popq      %r13                                          #91.1
..___tag_value_main.67:                                         #91.1
..LN343:
        popq      %r12                                          #91.1
..LN344:
        movq      %rbp, %rsp                                    #91.1
..LN345:
        popq      %rbp                                          #91.1
..___tag_value_main.68:                                         #
..LN346:
        ret                                                     #91.1
        .align    16,0x90
..___tag_value_main.70:                                         #
..LN347:
                                # LOE
..LN348:
# mark_end;
	.type	main,@function
	.size	main,.-main
..LNmain.349:
.LNmain:
	.data
# -- End  main
	.section .text._ZNSt11char_traitsIcE6lengthEPKc, "xaG",@progbits,_ZNSt11char_traitsIcE6lengthEPKc,comdat
..TXTST1:
L__routine_start__ZNSt11char_traitsIcE6lengthEPKc_1:
# -- Begin  _ZNSt11char_traitsIcE6lengthEPKc
# mark_begin;
       .align    16,0x90
	.weak _ZNSt11char_traitsIcE6lengthEPKc
_ZNSt11char_traitsIcE6lengthEPKc:
# parameter 1(__s): %rdi
..B2.1:                         # Preds ..B2.0
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.71:             #259.7
..LN350:
  .file   2 "/state/partition1/home/software/gcc/4.8.3/bin/../include/c++/4.8.3/bits/char_traits.h"
   .loc    2  259  is_stmt 1
        pushq     %rsi                                          #259.7
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.73:             #
..LN351:
        movq      %rdi, %rdx                                    #259.16
..LN352:
        movq      %rdx, %rcx                                    #259.16
..LN353:
        andq      $-16, %rdx                                    #259.16
..LN354:
        vpxor     %xmm0, %xmm0, %xmm0                           #259.16
..LN355:
        vpcmpeqb  (%rdx), %xmm0, %xmm0                          #259.16
..LN356:
        vpmovmskb %xmm0, %eax                                   #259.16
..LN357:
        andl      $15, %ecx                                     #259.16
..LN358:
        shrl      %cl, %eax                                     #259.16
..LN359:
        bsf       %eax, %eax                                    #259.16
..LN360:
        jne       ..L74         # Prob 60%                      #259.16
..LN361:
        movq      %rdx, %rax                                    #259.16
..LN362:
        addq      %rcx, %rdx                                    #259.16
..LN363:
        call      __intel_sse4_strlen                           #259.16
..L74:                                                          #
..LN364:
                                # LOE rax rbx rbp r12 r13 r14 r15
..B2.4:                         # Preds ..B2.1
..LN365:
        vzeroupper                                              #259.16
..LN366:
        popq      %rcx                                          #259.16
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.75:             #
..LN367:
        ret                                                     #259.16
        .align    16,0x90
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.76:             #
..LN368:
                                # LOE
..LN369:
# mark_end;
	.type	_ZNSt11char_traitsIcE6lengthEPKc,@function
	.size	_ZNSt11char_traitsIcE6lengthEPKc,.-_ZNSt11char_traitsIcE6lengthEPKc
..LN_ZNSt11char_traitsIcE6lengthEPKc.370:
.LN_ZNSt11char_traitsIcE6lengthEPKc:
	.data
# -- End  _ZNSt11char_traitsIcE6lengthEPKc
	.text
L__routine_start___sti__$E_2:
# -- Begin  __sti__$E
# mark_begin;
       .align    16,0x90
__sti__$E:
..B3.1:                         # Preds ..B3.0
..___tag_value___sti__$E.77:                                    #
..LN371:
        pushq     %rsi                                          #
..___tag_value___sti__$E.79:                                    #
..LN372:
  .file   3 "/state/partition1/home/software/gcc/4.8.3/bin/../include/c++/4.8.3/iostream"
   .loc    3  74  is_stmt 1
        movl      $_ZN30_INTERNAL_9_timer_cpp_b0745640St8__ioinitE, %edi #74.25
..___tag_value___sti__$E.80:                                    #74.25
..LN373:
        call      _ZNSt8ios_base4InitC1Ev                       #74.25
..___tag_value___sti__$E.81:                                    #
..LN374:
                                # LOE rbx rbp r12 r13 r14 r15
..B3.2:                         # Preds ..B3.1
..LN375:
        movl      $_ZNSt8ios_base4InitD1Ev, %edi                #74.25
..LN376:
        movl      $_ZN30_INTERNAL_9_timer_cpp_b0745640St8__ioinitE, %esi #74.25
..LN377:
        movl      $__dso_handle, %edx                           #74.25
..LN378:
        addq      $8, %rsp                                      #74.25
..___tag_value___sti__$E.82:                                    #
..LN379:
        jmp       __cxa_atexit                                  #74.25
        .align    16,0x90
..___tag_value___sti__$E.83:                                    #
..LN380:
                                # LOE
..LN381:
# mark_end;
	.type	__sti__$E,@function
	.size	__sti__$E,.-__sti__$E
..LN__sti__$E.382:
.LN__sti__$E:
	.data
# -- End  __sti__$E
	.bss
	.align 8
	.align 8
__$U3.0.17:
	.type	__$U3.0.17,@object
	.size	__$U3.0.17,8
	.space 8	# pad
	.align 1
_ZN30_INTERNAL_9_timer_cpp_b0745640St8__ioinitE:
	.type	_ZN30_INTERNAL_9_timer_cpp_b0745640St8__ioinitE,@object
	.size	_ZN30_INTERNAL_9_timer_cpp_b0745640St8__ioinitE,1
	.space 1	# pad
	.section .rodata, "a"
	.align 8
	.align 8
.L_2il0floatpacket.222:
	.long	0x00000000,0x40000000
	.type	.L_2il0floatpacket.222,@object
	.size	.L_2il0floatpacket.222,8
	.align 8
.L_2il0floatpacket.223:
	.long	0x00000000,0x40080000
	.type	.L_2il0floatpacket.223,@object
	.size	.L_2il0floatpacket.223,8
	.align 8
.L_2il0floatpacket.224:
	.long	0x00000000,0x40100000
	.type	.L_2il0floatpacket.224,@object
	.size	.L_2il0floatpacket.224,8
	.align 8
.L_2il0floatpacket.225:
	.long	0x00000000,0x40140000
	.type	.L_2il0floatpacket.225,@object
	.size	.L_2il0floatpacket.225,8
	.align 8
.L_2il0floatpacket.226:
	.long	0x00000000,0x40180000
	.type	.L_2il0floatpacket.226,@object
	.size	.L_2il0floatpacket.226,8
	.align 8
.L_2il0floatpacket.227:
	.long	0x00000000,0x41cdcd65
	.type	.L_2il0floatpacket.227,@object
	.size	.L_2il0floatpacket.227,8
	.align 8
.L_2il0floatpacket.228:
	.long	0x00000000,0x3ff00000
	.type	.L_2il0floatpacket.228,@object
	.size	.L_2il0floatpacket.228,8
	.section .rodata.str1.4, "aMS",@progbits,1
	.align 4
	.align 4
.L_2__STRING.3:
	.long	1935764581
	.long	1684370288
	.long	1835627552
	.word	14949
	.byte	0
	.type	.L_2__STRING.3,@object
	.size	.L_2__STRING.3,15
	.space 1, 0x00 	# pad
	.align 4
.L_2__STRING.4:
	.word	2675
	.byte	0
	.type	.L_2__STRING.4,@object
	.size	.L_2__STRING.4,3
	.space 1, 0x00 	# pad
	.align 4
.L_2__STRING.0:
	.word	123
	.type	.L_2__STRING.0,@object
	.size	.L_2__STRING.0,2
	.space 2, 0x00 	# pad
	.align 4
.L_2__STRING.1:
	.word	44
	.type	.L_2__STRING.1,@object
	.size	.L_2__STRING.1,2
	.space 2, 0x00 	# pad
	.align 4
.L_2__STRING.2:
	.word	125
	.type	.L_2__STRING.2,@object
	.size	.L_2__STRING.2,2
	.section .data._ZZNK11VectorSIMD2ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD2ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD2ngEvE2m1
_ZZNK11VectorSIMD2ngEvE2m1:
	.type	_ZZNK11VectorSIMD2ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD2ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK11VectorSIMD2ngEvE3m1s, "waG",@progbits,_ZZNK11VectorSIMD2ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK11VectorSIMD2ngEvE3m1s
_ZZNK11VectorSIMD2ngEvE3m1s:
	.type	_ZZNK11VectorSIMD2ngEvE3m1s,@object
	.size	_ZZNK11VectorSIMD2ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK11VectorSIMD2ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD2ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD2ngEvE2m1
_ZGVZNK11VectorSIMD2ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD2ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD2ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK11VectorSIMD2ngEvE3m1s, "waG",@progbits,_ZGVZNK11VectorSIMD2ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD2ngEvE3m1s
_ZGVZNK11VectorSIMD2ngEvE3m1s:
	.type	_ZGVZNK11VectorSIMD2ngEvE3m1s,@object
	.size	_ZGVZNK11VectorSIMD2ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD3ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD3ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD3ngEvE2m1
_ZZNK11VectorSIMD3ngEvE2m1:
	.type	_ZZNK11VectorSIMD3ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD3ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK11VectorSIMD3ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD3ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD3ngEvE2m1
_ZGVZNK11VectorSIMD3ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD3ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD3ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD4ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD4ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD4ngEvE2m1
_ZZNK11VectorSIMD4ngEvE2m1:
	.type	_ZZNK11VectorSIMD4ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD4ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK11VectorSIMD4ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD4ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD4ngEvE2m1
_ZGVZNK11VectorSIMD4ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD4ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD4ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD5ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD5ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD5ngEvE2m1
_ZZNK11VectorSIMD5ngEvE2m1:
	.type	_ZZNK11VectorSIMD5ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD5ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK11VectorSIMD5ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD5ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD5ngEvE2m1
_ZGVZNK11VectorSIMD5ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD5ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD5ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD6ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD6ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD6ngEvE2m1
_ZZNK11VectorSIMD6ngEvE2m1:
	.type	_ZZNK11VectorSIMD6ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD6ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK11VectorSIMD6ngEvE3m1s, "waG",@progbits,_ZZNK11VectorSIMD6ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK11VectorSIMD6ngEvE3m1s
_ZZNK11VectorSIMD6ngEvE3m1s:
	.type	_ZZNK11VectorSIMD6ngEvE3m1s,@object
	.size	_ZZNK11VectorSIMD6ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK11VectorSIMD6ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD6ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD6ngEvE2m1
_ZGVZNK11VectorSIMD6ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD6ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD6ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK11VectorSIMD6ngEvE3m1s, "waG",@progbits,_ZGVZNK11VectorSIMD6ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD6ngEvE3m1s
_ZGVZNK11VectorSIMD6ngEvE3m1s:
	.type	_ZGVZNK11VectorSIMD6ngEvE3m1s,@object
	.size	_ZGVZNK11VectorSIMD6ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD7ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD7ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD7ngEvE2m1
_ZZNK11VectorSIMD7ngEvE2m1:
	.type	_ZZNK11VectorSIMD7ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD7ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK11VectorSIMD7ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD7ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD7ngEvE2m1
_ZGVZNK11VectorSIMD7ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD7ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD7ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD8ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD8ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD8ngEvE2m1
_ZZNK11VectorSIMD8ngEvE2m1:
	.type	_ZZNK11VectorSIMD8ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD8ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK11VectorSIMD8ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD8ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD8ngEvE2m1
_ZGVZNK11VectorSIMD8ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD8ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD8ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK11VectorSIMD9ngEvE2m1, "waG",@progbits,_ZZNK11VectorSIMD9ngEvE2m1,comdat
	.align 32
	.weak _ZZNK11VectorSIMD9ngEvE2m1
_ZZNK11VectorSIMD9ngEvE2m1:
	.type	_ZZNK11VectorSIMD9ngEvE2m1,@object
	.size	_ZZNK11VectorSIMD9ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK11VectorSIMD9ngEvE2m1, "waG",@progbits,_ZGVZNK11VectorSIMD9ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK11VectorSIMD9ngEvE2m1
_ZGVZNK11VectorSIMD9ngEvE2m1:
	.type	_ZGVZNK11VectorSIMD9ngEvE2m1,@object
	.size	_ZGVZNK11VectorSIMD9ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD10ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD10ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD10ngEvE2m1
_ZZNK12VectorSIMD10ngEvE2m1:
	.type	_ZZNK12VectorSIMD10ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD10ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD10ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD10ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD10ngEvE3m1s
_ZZNK12VectorSIMD10ngEvE3m1s:
	.type	_ZZNK12VectorSIMD10ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD10ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD10ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD10ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD10ngEvE2m1
_ZGVZNK12VectorSIMD10ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD10ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD10ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD10ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD10ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD10ngEvE3m1s
_ZGVZNK12VectorSIMD10ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD10ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD10ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD11ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD11ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD11ngEvE2m1
_ZZNK12VectorSIMD11ngEvE2m1:
	.type	_ZZNK12VectorSIMD11ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD11ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD11ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD11ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD11ngEvE2m1
_ZGVZNK12VectorSIMD11ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD11ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD11ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD12ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD12ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD12ngEvE2m1
_ZZNK12VectorSIMD12ngEvE2m1:
	.type	_ZZNK12VectorSIMD12ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD12ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD12ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD12ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD12ngEvE2m1
_ZGVZNK12VectorSIMD12ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD12ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD12ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD13ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD13ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD13ngEvE2m1
_ZZNK12VectorSIMD13ngEvE2m1:
	.type	_ZZNK12VectorSIMD13ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD13ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD13ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD13ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD13ngEvE2m1
_ZGVZNK12VectorSIMD13ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD13ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD13ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD14ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD14ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD14ngEvE2m1
_ZZNK12VectorSIMD14ngEvE2m1:
	.type	_ZZNK12VectorSIMD14ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD14ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD14ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD14ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD14ngEvE3m1s
_ZZNK12VectorSIMD14ngEvE3m1s:
	.type	_ZZNK12VectorSIMD14ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD14ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD14ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD14ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD14ngEvE2m1
_ZGVZNK12VectorSIMD14ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD14ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD14ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD14ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD14ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD14ngEvE3m1s
_ZGVZNK12VectorSIMD14ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD14ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD14ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD15ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD15ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD15ngEvE2m1
_ZZNK12VectorSIMD15ngEvE2m1:
	.type	_ZZNK12VectorSIMD15ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD15ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD15ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD15ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD15ngEvE2m1
_ZGVZNK12VectorSIMD15ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD15ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD15ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD16ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD16ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD16ngEvE2m1
_ZZNK12VectorSIMD16ngEvE2m1:
	.type	_ZZNK12VectorSIMD16ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD16ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD16ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD16ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD16ngEvE2m1
_ZGVZNK12VectorSIMD16ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD16ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD16ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD17ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD17ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD17ngEvE2m1
_ZZNK12VectorSIMD17ngEvE2m1:
	.type	_ZZNK12VectorSIMD17ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD17ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD17ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD17ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD17ngEvE2m1
_ZGVZNK12VectorSIMD17ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD17ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD17ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD18ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD18ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD18ngEvE2m1
_ZZNK12VectorSIMD18ngEvE2m1:
	.type	_ZZNK12VectorSIMD18ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD18ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD18ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD18ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD18ngEvE3m1s
_ZZNK12VectorSIMD18ngEvE3m1s:
	.type	_ZZNK12VectorSIMD18ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD18ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD18ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD18ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD18ngEvE2m1
_ZGVZNK12VectorSIMD18ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD18ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD18ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD18ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD18ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD18ngEvE3m1s
_ZGVZNK12VectorSIMD18ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD18ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD18ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD19ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD19ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD19ngEvE2m1
_ZZNK12VectorSIMD19ngEvE2m1:
	.type	_ZZNK12VectorSIMD19ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD19ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD19ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD19ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD19ngEvE2m1
_ZGVZNK12VectorSIMD19ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD19ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD19ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD20ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD20ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD20ngEvE2m1
_ZZNK12VectorSIMD20ngEvE2m1:
	.type	_ZZNK12VectorSIMD20ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD20ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD20ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD20ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD20ngEvE2m1
_ZGVZNK12VectorSIMD20ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD20ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD20ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD21ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD21ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD21ngEvE2m1
_ZZNK12VectorSIMD21ngEvE2m1:
	.type	_ZZNK12VectorSIMD21ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD21ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD21ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD21ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD21ngEvE2m1
_ZGVZNK12VectorSIMD21ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD21ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD21ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD22ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD22ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD22ngEvE2m1
_ZZNK12VectorSIMD22ngEvE2m1:
	.type	_ZZNK12VectorSIMD22ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD22ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD22ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD22ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD22ngEvE3m1s
_ZZNK12VectorSIMD22ngEvE3m1s:
	.type	_ZZNK12VectorSIMD22ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD22ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD22ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD22ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD22ngEvE2m1
_ZGVZNK12VectorSIMD22ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD22ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD22ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD22ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD22ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD22ngEvE3m1s
_ZGVZNK12VectorSIMD22ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD22ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD22ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD23ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD23ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD23ngEvE2m1
_ZZNK12VectorSIMD23ngEvE2m1:
	.type	_ZZNK12VectorSIMD23ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD23ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD23ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD23ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD23ngEvE2m1
_ZGVZNK12VectorSIMD23ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD23ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD23ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD24ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD24ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD24ngEvE2m1
_ZZNK12VectorSIMD24ngEvE2m1:
	.type	_ZZNK12VectorSIMD24ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD24ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD24ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD24ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD24ngEvE2m1
_ZGVZNK12VectorSIMD24ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD24ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD24ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD25ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD25ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD25ngEvE2m1
_ZZNK12VectorSIMD25ngEvE2m1:
	.type	_ZZNK12VectorSIMD25ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD25ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD25ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD25ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD25ngEvE2m1
_ZGVZNK12VectorSIMD25ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD25ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD25ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD26ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD26ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD26ngEvE2m1
_ZZNK12VectorSIMD26ngEvE2m1:
	.type	_ZZNK12VectorSIMD26ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD26ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD26ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD26ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD26ngEvE3m1s
_ZZNK12VectorSIMD26ngEvE3m1s:
	.type	_ZZNK12VectorSIMD26ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD26ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD26ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD26ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD26ngEvE2m1
_ZGVZNK12VectorSIMD26ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD26ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD26ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD26ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD26ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD26ngEvE3m1s
_ZGVZNK12VectorSIMD26ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD26ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD26ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD27ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD27ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD27ngEvE2m1
_ZZNK12VectorSIMD27ngEvE2m1:
	.type	_ZZNK12VectorSIMD27ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD27ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD27ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD27ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD27ngEvE2m1
_ZGVZNK12VectorSIMD27ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD27ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD27ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD28ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD28ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD28ngEvE2m1
_ZZNK12VectorSIMD28ngEvE2m1:
	.type	_ZZNK12VectorSIMD28ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD28ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD28ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD28ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD28ngEvE2m1
_ZGVZNK12VectorSIMD28ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD28ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD28ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD29ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD29ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD29ngEvE2m1
_ZZNK12VectorSIMD29ngEvE2m1:
	.type	_ZZNK12VectorSIMD29ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD29ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD29ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD29ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD29ngEvE2m1
_ZGVZNK12VectorSIMD29ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD29ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD29ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD30ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD30ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD30ngEvE2m1
_ZZNK12VectorSIMD30ngEvE2m1:
	.type	_ZZNK12VectorSIMD30ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD30ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD30ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD30ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD30ngEvE3m1s
_ZZNK12VectorSIMD30ngEvE3m1s:
	.type	_ZZNK12VectorSIMD30ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD30ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD30ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD30ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD30ngEvE2m1
_ZGVZNK12VectorSIMD30ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD30ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD30ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD30ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD30ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD30ngEvE3m1s
_ZGVZNK12VectorSIMD30ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD30ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD30ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD31ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD31ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD31ngEvE2m1
_ZZNK12VectorSIMD31ngEvE2m1:
	.type	_ZZNK12VectorSIMD31ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD31ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD31ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD31ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD31ngEvE2m1
_ZGVZNK12VectorSIMD31ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD31ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD31ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD32ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD32ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD32ngEvE2m1
_ZZNK12VectorSIMD32ngEvE2m1:
	.type	_ZZNK12VectorSIMD32ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD32ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD32ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD32ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD32ngEvE2m1
_ZGVZNK12VectorSIMD32ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD32ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD32ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD33ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD33ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD33ngEvE2m1
_ZZNK12VectorSIMD33ngEvE2m1:
	.type	_ZZNK12VectorSIMD33ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD33ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD33ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD33ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD33ngEvE2m1
_ZGVZNK12VectorSIMD33ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD33ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD33ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD34ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD34ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD34ngEvE2m1
_ZZNK12VectorSIMD34ngEvE2m1:
	.type	_ZZNK12VectorSIMD34ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD34ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD34ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD34ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD34ngEvE3m1s
_ZZNK12VectorSIMD34ngEvE3m1s:
	.type	_ZZNK12VectorSIMD34ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD34ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD34ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD34ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD34ngEvE2m1
_ZGVZNK12VectorSIMD34ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD34ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD34ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD34ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD34ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD34ngEvE3m1s
_ZGVZNK12VectorSIMD34ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD34ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD34ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD35ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD35ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD35ngEvE2m1
_ZZNK12VectorSIMD35ngEvE2m1:
	.type	_ZZNK12VectorSIMD35ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD35ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD35ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD35ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD35ngEvE2m1
_ZGVZNK12VectorSIMD35ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD35ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD35ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD36ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD36ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD36ngEvE2m1
_ZZNK12VectorSIMD36ngEvE2m1:
	.type	_ZZNK12VectorSIMD36ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD36ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD36ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD36ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD36ngEvE2m1
_ZGVZNK12VectorSIMD36ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD36ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD36ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD37ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD37ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD37ngEvE2m1
_ZZNK12VectorSIMD37ngEvE2m1:
	.type	_ZZNK12VectorSIMD37ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD37ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD37ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD37ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD37ngEvE2m1
_ZGVZNK12VectorSIMD37ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD37ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD37ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD38ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD38ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD38ngEvE2m1
_ZZNK12VectorSIMD38ngEvE2m1:
	.type	_ZZNK12VectorSIMD38ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD38ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD38ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD38ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD38ngEvE3m1s
_ZZNK12VectorSIMD38ngEvE3m1s:
	.type	_ZZNK12VectorSIMD38ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD38ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD38ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD38ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD38ngEvE2m1
_ZGVZNK12VectorSIMD38ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD38ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD38ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD38ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD38ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD38ngEvE3m1s
_ZGVZNK12VectorSIMD38ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD38ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD38ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD39ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD39ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD39ngEvE2m1
_ZZNK12VectorSIMD39ngEvE2m1:
	.type	_ZZNK12VectorSIMD39ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD39ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD39ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD39ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD39ngEvE2m1
_ZGVZNK12VectorSIMD39ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD39ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD39ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD40ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD40ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD40ngEvE2m1
_ZZNK12VectorSIMD40ngEvE2m1:
	.type	_ZZNK12VectorSIMD40ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD40ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD40ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD40ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD40ngEvE2m1
_ZGVZNK12VectorSIMD40ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD40ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD40ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD41ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD41ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD41ngEvE2m1
_ZZNK12VectorSIMD41ngEvE2m1:
	.type	_ZZNK12VectorSIMD41ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD41ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD41ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD41ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD41ngEvE2m1
_ZGVZNK12VectorSIMD41ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD41ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD41ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD42ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD42ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD42ngEvE2m1
_ZZNK12VectorSIMD42ngEvE2m1:
	.type	_ZZNK12VectorSIMD42ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD42ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD42ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD42ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD42ngEvE3m1s
_ZZNK12VectorSIMD42ngEvE3m1s:
	.type	_ZZNK12VectorSIMD42ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD42ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD42ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD42ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD42ngEvE2m1
_ZGVZNK12VectorSIMD42ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD42ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD42ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD42ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD42ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD42ngEvE3m1s
_ZGVZNK12VectorSIMD42ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD42ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD42ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD43ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD43ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD43ngEvE2m1
_ZZNK12VectorSIMD43ngEvE2m1:
	.type	_ZZNK12VectorSIMD43ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD43ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD43ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD43ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD43ngEvE2m1
_ZGVZNK12VectorSIMD43ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD43ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD43ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD44ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD44ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD44ngEvE2m1
_ZZNK12VectorSIMD44ngEvE2m1:
	.type	_ZZNK12VectorSIMD44ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD44ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD44ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD44ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD44ngEvE2m1
_ZGVZNK12VectorSIMD44ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD44ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD44ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD45ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD45ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD45ngEvE2m1
_ZZNK12VectorSIMD45ngEvE2m1:
	.type	_ZZNK12VectorSIMD45ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD45ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD45ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD45ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD45ngEvE2m1
_ZGVZNK12VectorSIMD45ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD45ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD45ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD46ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD46ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD46ngEvE2m1
_ZZNK12VectorSIMD46ngEvE2m1:
	.type	_ZZNK12VectorSIMD46ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD46ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD46ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD46ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD46ngEvE3m1s
_ZZNK12VectorSIMD46ngEvE3m1s:
	.type	_ZZNK12VectorSIMD46ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD46ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD46ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD46ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD46ngEvE2m1
_ZGVZNK12VectorSIMD46ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD46ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD46ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD46ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD46ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD46ngEvE3m1s
_ZGVZNK12VectorSIMD46ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD46ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD46ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD47ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD47ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD47ngEvE2m1
_ZZNK12VectorSIMD47ngEvE2m1:
	.type	_ZZNK12VectorSIMD47ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD47ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD47ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD47ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD47ngEvE2m1
_ZGVZNK12VectorSIMD47ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD47ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD47ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD48ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD48ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD48ngEvE2m1
_ZZNK12VectorSIMD48ngEvE2m1:
	.type	_ZZNK12VectorSIMD48ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD48ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD48ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD48ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD48ngEvE2m1
_ZGVZNK12VectorSIMD48ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD48ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD48ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD49ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD49ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD49ngEvE2m1
_ZZNK12VectorSIMD49ngEvE2m1:
	.type	_ZZNK12VectorSIMD49ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD49ngEvE2m1,32
	.space 32	# pad
	.section .data._ZGVZNK12VectorSIMD49ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD49ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD49ngEvE2m1
_ZGVZNK12VectorSIMD49ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD49ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD49ngEvE2m1,8
	.space 8	# pad
	.section .data._ZZNK12VectorSIMD50ngEvE2m1, "waG",@progbits,_ZZNK12VectorSIMD50ngEvE2m1,comdat
	.align 32
	.weak _ZZNK12VectorSIMD50ngEvE2m1
_ZZNK12VectorSIMD50ngEvE2m1:
	.type	_ZZNK12VectorSIMD50ngEvE2m1,@object
	.size	_ZZNK12VectorSIMD50ngEvE2m1,32
	.space 32	# pad
	.section .data._ZZNK12VectorSIMD50ngEvE3m1s, "waG",@progbits,_ZZNK12VectorSIMD50ngEvE3m1s,comdat
	.align 16
	.weak _ZZNK12VectorSIMD50ngEvE3m1s
_ZZNK12VectorSIMD50ngEvE3m1s:
	.type	_ZZNK12VectorSIMD50ngEvE3m1s,@object
	.size	_ZZNK12VectorSIMD50ngEvE3m1s,16
	.space 16	# pad
	.section .data._ZGVZNK12VectorSIMD50ngEvE2m1, "waG",@progbits,_ZGVZNK12VectorSIMD50ngEvE2m1,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD50ngEvE2m1
_ZGVZNK12VectorSIMD50ngEvE2m1:
	.type	_ZGVZNK12VectorSIMD50ngEvE2m1,@object
	.size	_ZGVZNK12VectorSIMD50ngEvE2m1,8
	.space 8	# pad
	.section .data._ZGVZNK12VectorSIMD50ngEvE3m1s, "waG",@progbits,_ZGVZNK12VectorSIMD50ngEvE3m1s,comdat
	.align 8
	.weak _ZGVZNK12VectorSIMD50ngEvE3m1s
_ZGVZNK12VectorSIMD50ngEvE3m1s:
	.type	_ZGVZNK12VectorSIMD50ngEvE3m1s,@object
	.size	_ZGVZNK12VectorSIMD50ngEvE3m1s,8
	.space 8	# pad
	.section .data._ZNSt17integral_constantIbLb0EE5valueE, "waG",@progbits,_ZNSt17integral_constantIbLb0EE5valueE,comdat
	.align 1
	.weak _ZNSt17integral_constantIbLb0EE5valueE
_ZNSt17integral_constantIbLb0EE5valueE:
	.type	_ZNSt17integral_constantIbLb0EE5valueE,@object
	.size	_ZNSt17integral_constantIbLb0EE5valueE,1
	.byte	0
	.section .data._ZNSt17integral_constantIbLb1EE5valueE, "waG",@progbits,_ZNSt17integral_constantIbLb1EE5valueE,comdat
	.align 1
	.weak _ZNSt17integral_constantIbLb1EE5valueE
_ZNSt17integral_constantIbLb1EE5valueE:
	.type	_ZNSt17integral_constantIbLb1EE5valueE,@object
	.size	_ZNSt17integral_constantIbLb1EE5valueE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIcE9is_signedE, "waG",@progbits,_ZNSt14numeric_limitsIcE9is_signedE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIcE9is_signedE
_ZNSt14numeric_limitsIcE9is_signedE:
	.type	_ZNSt14numeric_limitsIcE9is_signedE,@object
	.size	_ZNSt14numeric_limitsIcE9is_signedE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIwE9is_signedE, "waG",@progbits,_ZNSt14numeric_limitsIwE9is_signedE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIwE9is_signedE
_ZNSt14numeric_limitsIwE9is_signedE:
	.type	_ZNSt14numeric_limitsIwE9is_signedE,@object
	.size	_ZNSt14numeric_limitsIwE9is_signedE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIDsE9is_signedE, "waG",@progbits,_ZNSt14numeric_limitsIDsE9is_signedE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIDsE9is_signedE
_ZNSt14numeric_limitsIDsE9is_signedE:
	.type	_ZNSt14numeric_limitsIDsE9is_signedE,@object
	.size	_ZNSt14numeric_limitsIDsE9is_signedE,1
	.byte	0
	.section .data._ZNSt14numeric_limitsIDiE9is_signedE, "waG",@progbits,_ZNSt14numeric_limitsIDiE9is_signedE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIDiE9is_signedE
_ZNSt14numeric_limitsIDiE9is_signedE:
	.type	_ZNSt14numeric_limitsIDiE9is_signedE,@object
	.size	_ZNSt14numeric_limitsIDiE9is_signedE,1
	.byte	0
	.section .data._ZNSt14numeric_limitsIfE12has_infinityE, "waG",@progbits,_ZNSt14numeric_limitsIfE12has_infinityE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIfE12has_infinityE
_ZNSt14numeric_limitsIfE12has_infinityE:
	.type	_ZNSt14numeric_limitsIfE12has_infinityE,@object
	.size	_ZNSt14numeric_limitsIfE12has_infinityE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIfE13has_quiet_NaNE, "waG",@progbits,_ZNSt14numeric_limitsIfE13has_quiet_NaNE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIfE13has_quiet_NaNE
_ZNSt14numeric_limitsIfE13has_quiet_NaNE:
	.type	_ZNSt14numeric_limitsIfE13has_quiet_NaNE,@object
	.size	_ZNSt14numeric_limitsIfE13has_quiet_NaNE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIfE10has_denormE, "waG",@progbits,_ZNSt14numeric_limitsIfE10has_denormE,comdat
	.align 4
	.weak _ZNSt14numeric_limitsIfE10has_denormE
_ZNSt14numeric_limitsIfE10has_denormE:
	.type	_ZNSt14numeric_limitsIfE10has_denormE,@object
	.size	_ZNSt14numeric_limitsIfE10has_denormE,4
	.long	1
	.section .data._ZNSt14numeric_limitsIdE12has_infinityE, "waG",@progbits,_ZNSt14numeric_limitsIdE12has_infinityE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIdE12has_infinityE
_ZNSt14numeric_limitsIdE12has_infinityE:
	.type	_ZNSt14numeric_limitsIdE12has_infinityE,@object
	.size	_ZNSt14numeric_limitsIdE12has_infinityE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIdE13has_quiet_NaNE, "waG",@progbits,_ZNSt14numeric_limitsIdE13has_quiet_NaNE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIdE13has_quiet_NaNE
_ZNSt14numeric_limitsIdE13has_quiet_NaNE:
	.type	_ZNSt14numeric_limitsIdE13has_quiet_NaNE,@object
	.size	_ZNSt14numeric_limitsIdE13has_quiet_NaNE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIdE10has_denormE, "waG",@progbits,_ZNSt14numeric_limitsIdE10has_denormE,comdat
	.align 4
	.weak _ZNSt14numeric_limitsIdE10has_denormE
_ZNSt14numeric_limitsIdE10has_denormE:
	.type	_ZNSt14numeric_limitsIdE10has_denormE,@object
	.size	_ZNSt14numeric_limitsIdE10has_denormE,4
	.long	1
	.section .data._ZNSt14numeric_limitsIeE12has_infinityE, "waG",@progbits,_ZNSt14numeric_limitsIeE12has_infinityE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIeE12has_infinityE
_ZNSt14numeric_limitsIeE12has_infinityE:
	.type	_ZNSt14numeric_limitsIeE12has_infinityE,@object
	.size	_ZNSt14numeric_limitsIeE12has_infinityE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIeE13has_quiet_NaNE, "waG",@progbits,_ZNSt14numeric_limitsIeE13has_quiet_NaNE,comdat
	.align 1
	.weak _ZNSt14numeric_limitsIeE13has_quiet_NaNE
_ZNSt14numeric_limitsIeE13has_quiet_NaNE:
	.type	_ZNSt14numeric_limitsIeE13has_quiet_NaNE,@object
	.size	_ZNSt14numeric_limitsIeE13has_quiet_NaNE,1
	.byte	1
	.section .data._ZNSt14numeric_limitsIeE10has_denormE, "waG",@progbits,_ZNSt14numeric_limitsIeE10has_denormE,comdat
	.align 4
	.weak _ZNSt14numeric_limitsIeE10has_denormE
_ZNSt14numeric_limitsIeE10has_denormE:
	.type	_ZNSt14numeric_limitsIeE10has_denormE,@object
	.size	_ZNSt14numeric_limitsIeE10has_denormE,4
	.long	1
	.section .data._ZNSt17integral_constantIlLl1EE5valueE, "waG",@progbits,_ZNSt17integral_constantIlLl1EE5valueE,comdat
	.align 8
	.weak _ZNSt17integral_constantIlLl1EE5valueE
_ZNSt17integral_constantIlLl1EE5valueE:
	.type	_ZNSt17integral_constantIlLl1EE5valueE,@object
	.size	_ZNSt17integral_constantIlLl1EE5valueE,8
	.long	0x00000001,0x00000000
	.section .data._ZNSt17integral_constantIlLl1000000000EE5valueE, "waG",@progbits,_ZNSt17integral_constantIlLl1000000000EE5valueE,comdat
	.align 8
	.weak _ZNSt17integral_constantIlLl1000000000EE5valueE
_ZNSt17integral_constantIlLl1000000000EE5valueE:
	.type	_ZNSt17integral_constantIlLl1000000000EE5valueE,@object
	.size	_ZNSt17integral_constantIlLl1000000000EE5valueE,8
	.long	0x3b9aca00,0x00000000
	.section .data._ZNSt5ratioILl1ELl1000000000EE3numE, "waG",@progbits,_ZNSt5ratioILl1ELl1000000000EE3numE,comdat
	.align 8
	.weak _ZNSt5ratioILl1ELl1000000000EE3numE
_ZNSt5ratioILl1ELl1000000000EE3numE:
	.type	_ZNSt5ratioILl1ELl1000000000EE3numE,@object
	.size	_ZNSt5ratioILl1ELl1000000000EE3numE,8
	.long	0x00000001,0x00000000
	.section .data._ZNSt5ratioILl1ELl1000000000EE3denE, "waG",@progbits,_ZNSt5ratioILl1ELl1000000000EE3denE,comdat
	.align 8
	.weak _ZNSt5ratioILl1ELl1000000000EE3denE
_ZNSt5ratioILl1ELl1000000000EE3denE:
	.type	_ZNSt5ratioILl1ELl1000000000EE3denE,@object
	.size	_ZNSt5ratioILl1ELl1000000000EE3denE,8
	.long	0x3b9aca00,0x00000000
	.section .data._ZNSt23__is_convertible_helperIllLb0EE5valueE, "waG",@progbits,_ZNSt23__is_convertible_helperIllLb0EE5valueE,comdat
	.align 1
	.weak _ZNSt23__is_convertible_helperIllLb0EE5valueE
_ZNSt23__is_convertible_helperIllLb0EE5valueE:
	.type	_ZNSt23__is_convertible_helperIllLb0EE5valueE,@object
	.size	_ZNSt23__is_convertible_helperIllLb0EE5valueE,1
	.byte	1
	.section .data._ZNSt5ratioILl1000000000ELl1EE3numE, "waG",@progbits,_ZNSt5ratioILl1000000000ELl1EE3numE,comdat
	.align 8
	.weak _ZNSt5ratioILl1000000000ELl1EE3numE
_ZNSt5ratioILl1000000000ELl1EE3numE:
	.type	_ZNSt5ratioILl1000000000ELl1EE3numE,@object
	.size	_ZNSt5ratioILl1000000000ELl1EE3numE,8
	.long	0x3b9aca00,0x00000000
	.section .data._ZNSt5ratioILl1000000000ELl1EE3denE, "waG",@progbits,_ZNSt5ratioILl1000000000ELl1EE3denE,comdat
	.align 8
	.weak _ZNSt5ratioILl1000000000ELl1EE3denE
_ZNSt5ratioILl1000000000ELl1EE3denE:
	.type	_ZNSt5ratioILl1000000000ELl1EE3denE,@object
	.size	_ZNSt5ratioILl1000000000ELl1EE3denE,8
	.long	0x00000001,0x00000000
	.section .data._ZNSt5ratioILl1ELl1EE3numE, "waG",@progbits,_ZNSt5ratioILl1ELl1EE3numE,comdat
	.align 8
	.weak _ZNSt5ratioILl1ELl1EE3numE
_ZNSt5ratioILl1ELl1EE3numE:
	.type	_ZNSt5ratioILl1ELl1EE3numE,@object
	.size	_ZNSt5ratioILl1ELl1EE3numE,8
	.long	0x00000001,0x00000000
	.section .data._ZNSt5ratioILl1ELl1EE3denE, "waG",@progbits,_ZNSt5ratioILl1ELl1EE3denE,comdat
	.align 8
	.weak _ZNSt5ratioILl1ELl1EE3denE
_ZNSt5ratioILl1ELl1EE3denE:
	.type	_ZNSt5ratioILl1ELl1EE3denE,@object
	.size	_ZNSt5ratioILl1ELl1EE3denE,8
	.long	0x00000001,0x00000000
	.section .data._ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEElLb0EE5valueE, "waG",@progbits,_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEElLb0EE5valueE,comdat
	.align 1
	.weak _ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEElLb0EE5valueE
_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEElLb0EE5valueE:
	.type	_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEElLb0EE5valueE,@object
	.size	_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEElLb0EE5valueE,1
	.byte	0
	.section .data._ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1EEEElLb0EE5valueE, "waG",@progbits,_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1EEEElLb0EE5valueE,comdat
	.align 1
	.weak _ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1EEEElLb0EE5valueE
_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1EEEElLb0EE5valueE:
	.type	_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1EEEElLb0EE5valueE,@object
	.size	_ZNSt23__is_convertible_helperINSt6chrono8durationIlSt5ratioILl1ELl1EEEElLb0EE5valueE,1
	.byte	0
	.section .data._ZNSt23__is_convertible_helperIddLb0EE5valueE, "waG",@progbits,_ZNSt23__is_convertible_helperIddLb0EE5valueE,comdat
	.align 1
	.weak _ZNSt23__is_convertible_helperIddLb0EE5valueE
_ZNSt23__is_convertible_helperIddLb0EE5valueE:
	.type	_ZNSt23__is_convertible_helperIddLb0EE5valueE,@object
	.size	_ZNSt23__is_convertible_helperIddLb0EE5valueE,1
	.byte	1
	.section .ctors, "wa"
	.align 8
__init_0:
	.type	__init_0,@object
	.size	__init_0,8
	.quad	__sti__$E
	.data
	.hidden __dso_handle
# mark_proc_addr_taken __sti__$E;
# mark_proc_addr_taken _ZNSt8ios_base4InitD1Ev;
	.section .note.GNU-stack, ""
# End
