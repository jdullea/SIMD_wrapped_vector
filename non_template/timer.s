# mark_description "Intel(R) C++ Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 15.0.0.090 Build 20140";
# mark_description "723";
# mark_description "-mavx -std=c++11 -S";
	.file "timer.cpp"
	.text
..TXTST0:
# -- Begin  main
	.text
# mark_begin;
       .align    16,0x90
	.globl main
main:
..B1.1:                         # Preds ..B1.0
..___tag_value_main.1:                                          #10.11
        pushq     %rbp                                          #10.11
..___tag_value_main.3:                                          #
        movq      %rsp, %rbp                                    #10.11
..___tag_value_main.4:                                          #
        andq      $-128, %rsp                                   #10.11
        subq      $640, %rsp                                    #10.11
        xorl      %esi, %esi                                    #10.11
        movl      $3, %edi                                      #10.11
        call      __intel_new_feature_proc_init                 #10.11
                                # LOE rbx r12 r13 r14 r15
..B1.99:                        # Preds ..B1.1
        vstmxcsr  (%rsp)                                        #10.11
        orl       $32832, (%rsp)                                #10.11
        vldmxcsr  (%rsp)                                        #10.11
        vmovups   16+d0_.86733.0.0.38(%rip), %xmm0              #14.35
        vmovups   %xmm0, 272(%rsp)                              #14.35
        vmovups   32+d0_.86733.0.0.38(%rip), %xmm1              #14.35
        vmovups   %xmm1, 288(%rsp)                              #14.35
        vmovups   48+d0_.86733.0.0.38(%rip), %xmm2              #14.35
        vmovups   %xmm2, 304(%rsp)                              #14.35
        vmovups   d0_.86733.0.0.38(%rip), %xmm3                 #14.35
        vmovups   %xmm3, 256(%rsp)                              #14.35
                                # LOE rbx r12 r13 r14 r15
..B1.2:                         # Preds ..B1.99
        vmovups   16+d1_.86733.0.0.38(%rip), %xmm0              #15.35
        vmovups   %xmm0, 16(%rsp)                               #15.35
        vmovups   32+d1_.86733.0.0.38(%rip), %xmm1              #15.35
        vmovups   %xmm1, 32(%rsp)                               #15.35
        vmovups   48+d1_.86733.0.0.38(%rip), %xmm2              #15.35
        vmovups   %xmm2, 48(%rsp)                               #15.35
        vmovups   d1_.86733.0.0.38(%rip), %xmm3                 #15.35
        vmovups   %xmm3, (%rsp)                                 #15.35
                                # LOE rbx r12 r13 r14 r15
..B1.3:                         # Preds ..B1.2
        vmovups   16+d2_.86733.0.0.38(%rip), %xmm0              #16.35
        vmovups   %xmm0, 336(%rsp)                              #16.35
        vmovups   32+d2_.86733.0.0.38(%rip), %xmm1              #16.35
        vmovups   %xmm1, 352(%rsp)                              #16.35
        vmovups   48+d2_.86733.0.0.38(%rip), %xmm2              #16.35
        vmovups   %xmm2, 368(%rsp)                              #16.35
        vmovups   d2_.86733.0.0.38(%rip), %xmm3                 #16.35
        vmovups   %xmm3, 320(%rsp)                              #16.35
                                # LOE rbx r12 r13 r14 r15
..B1.4:                         # Preds ..B1.3
        vmovups   16+r_.86733.0.0.38(%rip), %xmm0               #17.41
        vmovups   %xmm0, 400(%rsp)                              #17.41
        vmovups   32+r_.86733.0.0.38(%rip), %xmm1               #17.41
        vmovups   %xmm1, 416(%rsp)                              #17.41
        vmovups   48+r_.86733.0.0.38(%rip), %xmm2               #17.41
        vmovups   %xmm2, 432(%rsp)                              #17.41
        vmovups   r_.86733.0.0.38(%rip), %xmm3                  #17.41
        vmovups   %xmm3, 384(%rsp)                              #17.41
                                # LOE rbx r12 r13 r14 r15
..B1.5:                         # Preds ..B1.4
        vmovups   16+d0.86733.0.0.38(%rip), %xmm0               #20.28
        vmovups   %xmm0, 16(%rsp)                               #20.28
        vmovups   32+d0.86733.0.0.38(%rip), %xmm1               #20.28
        vmovups   %xmm1, 32(%rsp)                               #20.28
        vmovups   48+d0.86733.0.0.38(%rip), %xmm2               #20.28
        vmovups   %xmm2, 48(%rsp)                               #20.28
        vmovups   d0.86733.0.0.38(%rip), %xmm3                  #20.28
        vmovups   %xmm3, (%rsp)                                 #20.28
                                # LOE rbx r12 r13 r14 r15
..B1.6:                         # Preds ..B1.5
        vmovups   16+d1.86733.0.0.38(%rip), %xmm0               #21.28
        vmovups   %xmm0, 16(%rsp)                               #21.28
        vmovups   32+d1.86733.0.0.38(%rip), %xmm1               #21.28
        vmovups   %xmm1, 32(%rsp)                               #21.28
        vmovups   48+d1.86733.0.0.38(%rip), %xmm2               #21.28
        vmovups   %xmm2, 48(%rsp)                               #21.28
        vmovups   d1.86733.0.0.38(%rip), %xmm3                  #21.28
        vmovups   %xmm3, (%rsp)                                 #21.28
                                # LOE rbx r12 r13 r14 r15
..B1.7:                         # Preds ..B1.6
        vmovups   16+d2.86733.0.0.38(%rip), %xmm0               #22.28
        vmovups   %xmm0, 464(%rsp)                              #22.28
        vmovups   32+d2.86733.0.0.38(%rip), %xmm1               #22.28
        vmovups   %xmm1, 480(%rsp)                              #22.28
        vmovups   48+d2.86733.0.0.38(%rip), %xmm2               #22.28
        vmovups   %xmm2, 496(%rsp)                              #22.28
        vmovups   d2.86733.0.0.38(%rip), %xmm3                  #22.28
        vmovups   %xmm3, 448(%rsp)                              #22.28
                                # LOE rbx r12 r13 r14 r15
..B1.8:                         # Preds ..B1.7
        vpxor     %xmm0, %xmm0, %xmm0                           #23.27
        vmovups   %xmm0, 16(%rsp)                               #23.27
        vmovups   %xmm0, 32(%rsp)                               #23.27
        vmovups   %xmm0, 48(%rsp)                               #23.27
        vmovups   %xmm0, (%rsp)                                 #23.27
                                # LOE rbx r12 r13 r14 r15
..B1.9:                         # Preds ..B1.8
        movq      __$U2.0.19(%rip), %rax                        #27.53
        movq      %rax, 512(%rsp)                               #27.53
        movq      %rax, 520(%rsp)                               #27.60
..___tag_value_main.6:                                          #28.10
        call      _ZNSt6chrono3_V212system_clock3nowEv          #28.10
..___tag_value_main.7:                                          #
                                # LOE rax rbx r12 r13 r14 r15
..B1.100:                       # Preds ..B1.9
        movq      %rax, 512(%rsp)                               #28.10
                                # LOE rbx r12 r13 r14 r15
..B1.10:                        # Preds ..B1.100
        vmovupd   256(%rsp), %ymm4                              #36.4
        vmovupd   288(%rsp), %ymm5                              #36.4
        vmovupd   320(%rsp), %ymm6                              #38.4
        vmovupd   352(%rsp), %ymm7                              #38.4
        vmovupd   384(%rsp), %ymm8                              #39.6
        vmovupd   416(%rsp), %ymm9                              #39.6
        vmovupd   448(%rsp), %xmm0                              #33.16
        vmovupd   480(%rsp), %xmm2                              #33.16
        vmovupd   %ymm4, (%rsp)                                 #36.4
        vmovupd   %ymm5, 192(%rsp)                              #36.4
        vmovupd   %ymm6, 32(%rsp)                               #38.4
        vmovupd   %ymm7, 224(%rsp)                              #38.4
        vmovupd   %ymm8, 64(%rsp)                               #39.6
        vmovupd   %ymm9, 96(%rsp)                               #39.6
        vinsertf128 $1, 464(%rsp), %ymm0, %ymm1                 #33.16
        vinsertf128 $1, 496(%rsp), %ymm2, %ymm3                 #33.16
        vmovups   %ymm1, 128(%rsp)                              #33.16
        vmovups   %ymm3, 160(%rsp)                              #33.16
                                # LOE rbx r12 r13 r14 r15
..B1.102:                       # Preds ..B1.10
# Begin ASM
# #start simd
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.101:                       # Preds ..B1.102
        vmovupd   32(%rsp), %ymm2                               #46.24
        xorl      %eax, %eax                                    #44.12
        vmovupd   224(%rsp), %ymm0                              #46.24
        vmovupd   .L_2il0floatpacket.2(%rip), %ymm3             #46.24
        vmovupd   96(%rsp), %ymm5                               #47.22
        vmovupd   64(%rsp), %ymm6                               #47.22
        vmulpd    (%rsp), %ymm2, %ymm1                          #46.24
        vmulpd    192(%rsp), %ymm0, %ymm4                       #46.24
        vmovupd   .L_2il0floatpacket.3(%rip), %ymm0             #47.22
        vmulpd    %ymm1, %ymm3, %ymm2                           #46.24
        vmulpd    %ymm4, %ymm3, %ymm1                           #46.24
        vmovups   160(%rsp), %ymm4                              #47.22
        vmovups   128(%rsp), %ymm3                              #47.22
                                # LOE rbx r12 r13 r14 r15 eax ymm0 ymm1 ymm2 ymm3 ymm4 ymm5 ymm6
..B1.11:                        # Preds ..B1.11 ..B1.101
        vaddpd    %ymm3, %ymm2, %ymm3                           #46.29
        incl      %eax                                          #44.33
        vaddpd    %ymm4, %ymm1, %ymm4                           #46.29
        vaddpd    %ymm6, %ymm3, %ymm6                           #46.7
        vaddpd    %ymm5, %ymm4, %ymm5                           #46.7
        vmulpd    %ymm6, %ymm0, %ymm3                           #47.22
        vmulpd    %ymm5, %ymm0, %ymm4                           #47.22
        cmpl      $1000000000, %eax                             #44.21
        jl        ..B1.11       # Prob 100%                     #44.21
                                # LOE rbx r12 r13 r14 r15 eax ymm0 ymm1 ymm2 ymm3 ymm4 ymm5 ymm6
..B1.12:                        # Preds ..B1.11
# Begin ASM
        vmovupd   %ymm5, 96(%rsp)                               #
        vmovupd   %ymm6, 64(%rsp)                               #
        vmovups   %ymm4, 160(%rsp)                              #
        vmovups   %ymm3, 128(%rsp)                              #
# #end simd
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.104:                       # Preds ..B1.12
        vzeroupper                                              #52.8
..___tag_value_main.8:                                          #52.8
        call      _ZNSt6chrono3_V212system_clock3nowEv          #52.8
..___tag_value_main.9:                                          #
                                # LOE rax rbx r12 r13 r14 r15
..B1.103:                       # Preds ..B1.104
        movq      %rax, 520(%rsp)                               #52.8
                                # LOE rbx r12 r13 r14 r15
..B1.13:                        # Preds ..B1.103
        movq      520(%rsp), %rax                               #53.50
        movl      $_ZSt4cout, %edi                              #56.11
        movq      512(%rsp), %rdx                               #53.54
        movl      $.L_2__STRING.3, %esi                         #56.11
        movq      %rax, 8(%rsp)                                 #53.50
        movq      %rdx, (%rsp)                                  #53.54
..___tag_value_main.10:                                         #56.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #56.11
..___tag_value_main.11:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.105:                       # Preds ..B1.13
        movq      %rax, %rdi                                    #56.11
                                # LOE rbx rdi r12 r13 r14 r15
..B1.14:                        # Preds ..B1.105
        movq      8(%rsp), %rax                                 #56.30
        vxorpd    %xmm0, %xmm0, %xmm0                           #56.30
        subq      (%rsp), %rax                                  #56.30
        vcvtsi2sdq %rax, %xmm0, %xmm0                           #56.30
        vdivsd    .L_2il0floatpacket.4(%rip), %xmm0, %xmm0      #56.30
..___tag_value_main.12:                                         #56.30
        call      _ZNSolsEd                                     #56.30
..___tag_value_main.13:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.15:                        # Preds ..B1.14
        movl      $.L_2__STRING.4, %esi                         #56.56
        movq      %rax, %rdi                                    #56.56
..___tag_value_main.14:                                         #56.56
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #56.56
..___tag_value_main.15:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.16:                        # Preds ..B1.15
        vmovupd   64(%rsp), %ymm0                               #58.11
        movl      $.L_2__STRING.0, %esi                         #58.11
        vmovupd   96(%rsp), %ymm1                               #58.11
        movl      $_ZSt4cout, %edi                              #58.11
        vmovupd   %xmm0, (%rsp)                                 #58.11
        vmovupd   %xmm1, 32(%rsp)                               #58.11
        vextractf128 $1, %ymm0, 16(%rsp)                        #58.11
        vextractf128 $1, %ymm1, 48(%rsp)                        #58.11
        vzeroupper                                              #58.11
..___tag_value_main.16:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.17:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.17:                        # Preds ..B1.16
        movq      %rax, %rdi                                    #58.11
        vmovsd    (%rsp), %xmm0                                 #58.11
..___tag_value_main.18:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.19:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.18:                        # Preds ..B1.17
        movl      $.L_2__STRING.1, %esi                         #58.11
        movq      %rax, %rdi                                    #58.11
..___tag_value_main.20:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.21:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.19:                        # Preds ..B1.18
        movq      %rax, %rdi                                    #58.11
        vmovsd    8(%rsp), %xmm0                                #58.11
..___tag_value_main.22:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.23:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.20:                        # Preds ..B1.19
        movq      %rax, %rdi                                    #58.11
        movl      $.L_2__STRING.1, %esi                         #58.11
..___tag_value_main.24:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.25:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.21:                        # Preds ..B1.20
        movq      %rax, %rdi                                    #58.11
        vmovsd    16(%rsp), %xmm0                               #58.11
..___tag_value_main.26:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.27:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.22:                        # Preds ..B1.21
        movq      %rax, %rdi                                    #58.11
        movl      $.L_2__STRING.1, %esi                         #58.11
..___tag_value_main.28:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.29:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.23:                        # Preds ..B1.22
        movq      %rax, %rdi                                    #58.11
        vmovsd    24(%rsp), %xmm0                               #58.11
..___tag_value_main.30:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.31:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.24:                        # Preds ..B1.23
        movq      %rax, %rdi                                    #58.11
        movl      $.L_2__STRING.1, %esi                         #58.11
..___tag_value_main.32:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.33:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.25:                        # Preds ..B1.24
        movq      %rax, %rdi                                    #58.11
        vmovsd    32(%rsp), %xmm0                               #58.11
..___tag_value_main.34:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.35:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.26:                        # Preds ..B1.25
        movq      %rax, %rdi                                    #58.11
        movl      $.L_2__STRING.1, %esi                         #58.11
..___tag_value_main.36:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.37:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.27:                        # Preds ..B1.26
        movq      %rax, %rdi                                    #58.11
        vmovsd    40(%rsp), %xmm0                               #58.11
..___tag_value_main.38:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.39:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.28:                        # Preds ..B1.27
        movq      %rax, %rdi                                    #58.11
        movl      $.L_2__STRING.1, %esi                         #58.11
..___tag_value_main.40:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.41:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.29:                        # Preds ..B1.28
        movq      %rax, %rdi                                    #58.11
        vmovsd    48(%rsp), %xmm0                               #58.11
..___tag_value_main.42:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.43:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.30:                        # Preds ..B1.29
        movq      %rax, %rdi                                    #58.11
        movl      $.L_2__STRING.1, %esi                         #58.11
..___tag_value_main.44:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.45:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.31:                        # Preds ..B1.30
        movq      %rax, %rdi                                    #58.11
        vmovsd    56(%rsp), %xmm0                               #58.11
..___tag_value_main.46:                                         #58.11
        call      _ZNSolsEd                                     #58.11
..___tag_value_main.47:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.32:                        # Preds ..B1.31
        movl      $.L_2__STRING.2, %esi                         #58.11
        movq      %rax, %rdi                                    #58.11
..___tag_value_main.48:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.49:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.33:                        # Preds ..B1.32
        vmovups   128(%rsp), %ymm0                              #58.16
        movl      $_ZSt4cout, %edi                              #58.16
        vmovups   160(%rsp), %ymm1                              #58.16
        movl      $.L_2__STRING.0, %esi                         #58.16
        vmovupd   %xmm0, (%rsp)                                 #58.16
        vmovupd   %xmm1, 32(%rsp)                               #58.16
        vextractf128 $1, %ymm0, 16(%rsp)                        #58.16
        vextractf128 $1, %ymm1, 48(%rsp)                        #58.16
        vzeroupper                                              #58.16
..___tag_value_main.50:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.51:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.34:                        # Preds ..B1.33
        movq      %rax, %rdi                                    #58.16
        vmovsd    (%rsp), %xmm0                                 #58.16
..___tag_value_main.52:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.53:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.35:                        # Preds ..B1.34
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.54:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.55:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.36:                        # Preds ..B1.35
        movq      %rax, %rdi                                    #58.16
        vmovsd    8(%rsp), %xmm0                                #58.16
..___tag_value_main.56:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.57:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.37:                        # Preds ..B1.36
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.58:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.59:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.38:                        # Preds ..B1.37
        movq      %rax, %rdi                                    #58.16
        vmovsd    16(%rsp), %xmm0                               #58.16
..___tag_value_main.60:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.61:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.39:                        # Preds ..B1.38
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.62:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.63:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.40:                        # Preds ..B1.39
        movq      %rax, %rdi                                    #58.16
        vmovsd    24(%rsp), %xmm0                               #58.16
..___tag_value_main.64:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.65:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.41:                        # Preds ..B1.40
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.66:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.67:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.42:                        # Preds ..B1.41
        movq      %rax, %rdi                                    #58.16
        vmovsd    32(%rsp), %xmm0                               #58.16
..___tag_value_main.68:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.69:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.43:                        # Preds ..B1.42
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.70:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.71:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.44:                        # Preds ..B1.43
        movq      %rax, %rdi                                    #58.16
        vmovsd    40(%rsp), %xmm0                               #58.16
..___tag_value_main.72:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.73:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.45:                        # Preds ..B1.44
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.74:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.75:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.46:                        # Preds ..B1.45
        movq      %rax, %rdi                                    #58.16
        vmovsd    48(%rsp), %xmm0                               #58.16
..___tag_value_main.76:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.77:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.47:                        # Preds ..B1.46
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.1, %esi                         #58.16
..___tag_value_main.78:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.79:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.48:                        # Preds ..B1.47
        movq      %rax, %rdi                                    #58.16
        vmovsd    56(%rsp), %xmm0                               #58.16
..___tag_value_main.80:                                         #58.16
        call      _ZNSolsEd                                     #58.16
..___tag_value_main.81:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.49:                        # Preds ..B1.48
        movq      %rax, %rdi                                    #58.16
        movl      $.L_2__STRING.2, %esi                         #58.16
..___tag_value_main.82:                                         #58.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.16
..___tag_value_main.83:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.50:                        # Preds ..B1.49
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #58.19
        movl      $_ZSt4cout, %edi                              #58.19
..___tag_value_main.84:                                         #58.19
        call      _ZNSolsEPFRSoS_E                              #58.19
..___tag_value_main.85:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.51:                        # Preds ..B1.50
        vmovups   16+d0.87265.0.0.38(%rip), %xmm0               #63.21
        vmovups   %xmm0, 176(%rsp)                              #63.21
        vmovups   32+d0.87265.0.0.38(%rip), %xmm1               #63.21
        vmovups   %xmm1, 192(%rsp)                              #63.21
        vmovups   48+d0.87265.0.0.38(%rip), %xmm2               #63.21
        vmovups   %xmm2, 208(%rsp)                              #63.21
        vmovups   d0.87265.0.0.38(%rip), %xmm3                  #63.21
        vmovups   %xmm3, 160(%rsp)                              #63.21
                                # LOE rbx r12 r13 r14 r15
..B1.52:                        # Preds ..B1.51
        vmovups   16+d1.87265.0.0.38(%rip), %xmm0               #64.14
        vmovups   %xmm0, 240(%rsp)                              #64.14
        vmovups   32+d1.87265.0.0.38(%rip), %xmm1               #64.14
        vmovups   %xmm1, 256(%rsp)                              #64.14
        vmovups   48+d1.87265.0.0.38(%rip), %xmm2               #64.14
        vmovups   %xmm2, 272(%rsp)                              #64.14
        vmovups   d1.87265.0.0.38(%rip), %xmm3                  #64.14
        vmovups   %xmm3, 224(%rsp)                              #64.14
                                # LOE rbx r12 r13 r14 r15
..B1.53:                        # Preds ..B1.52
        vmovups   16+d2.87265.0.0.38(%rip), %xmm0               #65.21
        vmovups   %xmm0, 48(%rsp)                               #65.21
        vmovups   32+d2.87265.0.0.38(%rip), %xmm1               #65.21
        vmovups   %xmm1, 64(%rsp)                               #65.21
        vmovups   48+d2.87265.0.0.38(%rip), %xmm2               #65.21
        vmovups   %xmm2, 80(%rsp)                               #65.21
        vmovups   d2.87265.0.0.38(%rip), %xmm3                  #65.21
        vmovups   %xmm3, 32(%rsp)                               #65.21
                                # LOE rbx r12 r13 r14 r15
..B1.54:                        # Preds ..B1.53
        vmovups   16+r.87265.0.0.38(%rip), %xmm0                #66.13
        vmovups   %xmm0, 112(%rsp)                              #66.13
        vmovups   32+r.87265.0.0.38(%rip), %xmm1                #66.13
        vmovups   %xmm1, 128(%rsp)                              #66.13
        vmovups   48+r.87265.0.0.38(%rip), %xmm2                #66.13
        vmovups   %xmm2, 144(%rsp)                              #66.13
        vmovups   r.87265.0.0.38(%rip), %xmm3                   #66.13
        vmovups   %xmm3, 96(%rsp)                               #66.13
                                # LOE rbx r12 r13 r14 r15
..B1.55:                        # Preds ..B1.54
        movq      __$U2.0.19(%rip), %rax                        #68.53
        movq      %rax, (%rsp)                                  #68.53
        movq      %rax, 8(%rsp)                                 #68.60
..___tag_value_main.86:                                         #69.10
        call      _ZNSt6chrono3_V212system_clock3nowEv          #69.10
..___tag_value_main.87:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.139:                       # Preds ..B1.55
        movq      %rax, (%rsp)                                  #69.10
                                # LOE rbx r12 r13 r14 r15
..B1.56:                        # Preds ..B1.139
# Begin ASM
# #second
#end ASM
                                # LOE rbx r12 r13 r14 r15
..B1.140:                       # Preds ..B1.56
        vmovsd    .L_2il0floatpacket.5(%rip), %xmm1             #74.3
        xorl      %eax, %eax                                    #74.3
        vmovsd    .L_2il0floatpacket.6(%rip), %xmm0             #74.3
        xorl      %ecx, %ecx                                    #74.3
                                # LOE rax rbx r12 r13 r14 r15 ecx xmm0 xmm1
..B1.57:                        # Preds ..B1.59 ..B1.140
        vmulsd    160(%rsp,%rax,8), %xmm1, %xmm2                #75.30
        movl      %ecx, %edx                                    #73.9
        vmovsd    32(%rsp,%rax,8), %xmm4                        #75.39
        vmovsd    96(%rsp,%rax,8), %xmm3                        #75.4
        vmulsd    224(%rsp,%rax,8), %xmm2, %xmm2                #75.30
                                # LOE rax rbx r12 r13 r14 r15 edx ecx xmm0 xmm1 xmm2 xmm3 xmm4
..B1.58:                        # Preds ..B1.58 ..B1.57
        incl      %edx                                          #73.9
        vaddsd    %xmm4, %xmm2, %xmm4                           #75.39
        vaddsd    %xmm4, %xmm3, %xmm3                           #75.4
        vmulsd    %xmm3, %xmm0, %xmm4                           #76.25
        cmpl      $1000000000, %edx                             #73.9
        jb        ..B1.58       # Prob 87%                      #73.9
                                # LOE rax rbx r12 r13 r14 r15 edx ecx xmm0 xmm1 xmm2 xmm3 xmm4
..B1.59:                        # Preds ..B1.58
        vmovsd    %xmm4, 32(%rsp,%rax,8)                        #76.4
        vmovsd    %xmm3, 96(%rsp,%rax,8)                        #75.4
        incq      %rax                                          #74.3
        cmpq      $8, %rax                                      #74.3
        jb        ..B1.57       # Prob 100%                     #74.3
                                # LOE rax rbx r12 r13 r14 r15 ecx xmm0 xmm1
..B1.60:                        # Preds ..B1.59
# Begin ASM
# #end
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.142:                       # Preds ..B1.60
..___tag_value_main.88:                                         #82.8
        call      _ZNSt6chrono3_V212system_clock3nowEv          #82.8
..___tag_value_main.89:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.141:                       # Preds ..B1.142
        movq      %rax, 8(%rsp)                                 #82.8
                                # LOE rbx r12 r13 r14 r15
..B1.61:                        # Preds ..B1.141
        movq      8(%rsp), %rax                                 #83.50
        movl      $_ZSt4cout, %edi                              #85.18
        movq      (%rsp), %rdx                                  #83.54
        movl      $.L_2__STRING.3, %esi                         #85.18
        movq      %rax, 24(%rsp)                                #83.50
        movq      %rdx, 16(%rsp)                                #83.54
..___tag_value_main.90:                                         #85.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #85.18
..___tag_value_main.91:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.143:                       # Preds ..B1.61
        movq      %rax, %rdi                                    #85.18
                                # LOE rbx rdi r12 r13 r14 r15
..B1.62:                        # Preds ..B1.143
        movq      24(%rsp), %rax                                #85.37
        vxorpd    %xmm0, %xmm0, %xmm0                           #85.37
        subq      16(%rsp), %rax                                #85.37
        vcvtsi2sdq %rax, %xmm0, %xmm0                           #85.37
        vdivsd    .L_2il0floatpacket.4(%rip), %xmm0, %xmm0      #85.37
..___tag_value_main.92:                                         #85.37
        call      _ZNSolsEd                                     #85.37
..___tag_value_main.93:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.63:                        # Preds ..B1.62
        movq      %rax, %rdi                                    #85.63
        movl      $.L_2__STRING.4, %esi                         #85.63
..___tag_value_main.94:                                         #85.63
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #85.63
..___tag_value_main.95:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.64:                        # Preds ..B1.63
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    96(%rsp), %xmm0                               #88.12
..___tag_value_main.96:                                         #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.97:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.65:                        # Preds ..B1.64
        movl      $.L_2__STRING.5, %esi                         #88.18
        movq      %rax, %rdi                                    #88.18
..___tag_value_main.98:                                         #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.99:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.66:                        # Preds ..B1.65
        movq      %rax, %rdi                                    #88.24
        vmovsd    32(%rsp), %xmm0                               #88.24
..___tag_value_main.100:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.101:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.67:                        # Preds ..B1.66
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.102:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.103:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.68:                        # Preds ..B1.67
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    104(%rsp), %xmm0                              #88.12
..___tag_value_main.104:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.105:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.69:                        # Preds ..B1.68
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.106:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.107:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.70:                        # Preds ..B1.69
        movq      %rax, %rdi                                    #88.24
        vmovsd    40(%rsp), %xmm0                               #88.24
..___tag_value_main.108:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.109:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.71:                        # Preds ..B1.70
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.110:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.111:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.72:                        # Preds ..B1.71
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    112(%rsp), %xmm0                              #88.12
..___tag_value_main.112:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.113:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.73:                        # Preds ..B1.72
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.114:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.115:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.74:                        # Preds ..B1.73
        movq      %rax, %rdi                                    #88.24
        vmovsd    48(%rsp), %xmm0                               #88.24
..___tag_value_main.116:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.117:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.75:                        # Preds ..B1.74
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.118:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.119:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.76:                        # Preds ..B1.75
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    120(%rsp), %xmm0                              #88.12
..___tag_value_main.120:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.121:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.77:                        # Preds ..B1.76
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.122:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.123:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.78:                        # Preds ..B1.77
        movq      %rax, %rdi                                    #88.24
        vmovsd    56(%rsp), %xmm0                               #88.24
..___tag_value_main.124:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.125:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.79:                        # Preds ..B1.78
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.126:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.127:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.80:                        # Preds ..B1.79
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    128(%rsp), %xmm0                              #88.12
..___tag_value_main.128:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.129:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.81:                        # Preds ..B1.80
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.130:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.131:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.82:                        # Preds ..B1.81
        movq      %rax, %rdi                                    #88.24
        vmovsd    64(%rsp), %xmm0                               #88.24
..___tag_value_main.132:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.133:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.83:                        # Preds ..B1.82
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.134:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.135:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.84:                        # Preds ..B1.83
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    136(%rsp), %xmm0                              #88.12
..___tag_value_main.136:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.137:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.85:                        # Preds ..B1.84
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.138:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.139:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.86:                        # Preds ..B1.85
        movq      %rax, %rdi                                    #88.24
        vmovsd    72(%rsp), %xmm0                               #88.24
..___tag_value_main.140:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.141:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.87:                        # Preds ..B1.86
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.142:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.143:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.88:                        # Preds ..B1.87
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    144(%rsp), %xmm0                              #88.12
..___tag_value_main.144:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.145:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.89:                        # Preds ..B1.88
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.146:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.147:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.90:                        # Preds ..B1.89
        movq      %rax, %rdi                                    #88.24
        vmovsd    80(%rsp), %xmm0                               #88.24
..___tag_value_main.148:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.149:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.91:                        # Preds ..B1.90
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.150:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.151:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.92:                        # Preds ..B1.91
        movl      $_ZSt4cout, %edi                              #88.12
        vmovsd    152(%rsp), %xmm0                              #88.12
..___tag_value_main.152:                                        #88.12
        call      _ZNSolsEd                                     #88.12
..___tag_value_main.153:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.93:                        # Preds ..B1.92
        movq      %rax, %rdi                                    #88.18
        movl      $.L_2__STRING.5, %esi                         #88.18
..___tag_value_main.154:                                        #88.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.18
..___tag_value_main.155:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.94:                        # Preds ..B1.93
        movq      %rax, %rdi                                    #88.24
        vmovsd    88(%rsp), %xmm0                               #88.24
..___tag_value_main.156:                                        #88.24
        call      _ZNSolsEd                                     #88.24
..___tag_value_main.157:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.95:                        # Preds ..B1.94
        movq      %rax, %rdi                                    #88.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.31
..___tag_value_main.158:                                        #88.31
        call      _ZNSolsEPFRSoS_E                              #88.31
..___tag_value_main.159:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.96:                        # Preds ..B1.95
        xorl      %eax, %eax                                    #93.1
        movq      %rbp, %rsp                                    #93.1
        popq      %rbp                                          #93.1
..___tag_value_main.160:                                        #
        ret                                                     #93.1
        .align    16,0x90
..___tag_value_main.162:                                        #
                                # LOE
# mark_end;
	.type	main,@function
	.size	main,.-main
	.section .rodata, "a"
	.align 32
	.align 32
d0_.86733.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d1_.86733.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d2_.86733.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
r_.86733.0.0.38:
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d0.86733.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d1.86733.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d2.86733.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d0.87265.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d1.87265.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
d2.87265.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.align 32
r.87265.0.0.38:
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x00000000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.data
# -- End  main
	.section .text._ZNSt11char_traitsIcE6lengthEPKc, "xaG",@progbits,_ZNSt11char_traitsIcE6lengthEPKc,comdat
..TXTST1:
# -- Begin  _ZNSt11char_traitsIcE6lengthEPKc
	.section .text._ZNSt11char_traitsIcE6lengthEPKc, "xaG",@progbits,_ZNSt11char_traitsIcE6lengthEPKc,comdat
# mark_begin;
       .align    16,0x90
	.weak _ZNSt11char_traitsIcE6lengthEPKc
_ZNSt11char_traitsIcE6lengthEPKc:
# parameter 1: %rdi
..B2.1:                         # Preds ..B2.0
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.163:            #259.7
        pushq     %rsi                                          #259.7
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.165:            #
        movq      %rdi, %rdx                                    #259.16
        movq      %rdx, %rcx                                    #259.16
        andq      $-16, %rdx                                    #259.16
        vpxor     %xmm0, %xmm0, %xmm0                           #259.16
        vpcmpeqb  (%rdx), %xmm0, %xmm0                          #259.16
        vpmovmskb %xmm0, %eax                                   #259.16
        andl      $15, %ecx                                     #259.16
        shrl      %cl, %eax                                     #259.16
        bsf       %eax, %eax                                    #259.16
        jne       ..L166        # Prob 60%                      #259.16
        movq      %rdx, %rax                                    #259.16
        addq      %rcx, %rdx                                    #259.16
        call      __intel_sse4_strlen                           #259.16
..L166:                                                         #
                                # LOE rax rbx rbp r12 r13 r14 r15
..B2.4:                         # Preds ..B2.1
        popq      %rcx                                          #259.16
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.167:            #
        ret                                                     #259.16
        .align    16,0x90
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.168:            #
                                # LOE
# mark_end;
	.type	_ZNSt11char_traitsIcE6lengthEPKc,@function
	.size	_ZNSt11char_traitsIcE6lengthEPKc,.-_ZNSt11char_traitsIcE6lengthEPKc
	.data
# -- End  _ZNSt11char_traitsIcE6lengthEPKc
	.text
# -- Begin  __sti__$E
	.text
# mark_begin;
       .align    16,0x90
__sti__$E:
..B3.1:                         # Preds ..B3.0
..___tag_value___sti__$E.169:                                   #
        pushq     %rsi                                          #
..___tag_value___sti__$E.171:                                   #
        movl      $_ZN30_INTERNAL_9_timer_cpp_5f10fa02St8__ioinitE, %edi #74.25
..___tag_value___sti__$E.172:                                   #74.25
        call      _ZNSt8ios_base4InitC1Ev                       #74.25
..___tag_value___sti__$E.173:                                   #
                                # LOE rbx rbp r12 r13 r14 r15
..B3.2:                         # Preds ..B3.1
        movl      $_ZNSt8ios_base4InitD1Ev, %edi                #74.25
        movl      $_ZN30_INTERNAL_9_timer_cpp_5f10fa02St8__ioinitE, %esi #74.25
        movl      $__dso_handle, %edx                           #74.25
        addq      $8, %rsp                                      #74.25
..___tag_value___sti__$E.174:                                   #
        jmp       __cxa_atexit                                  #74.25
        .align    16,0x90
..___tag_value___sti__$E.175:                                   #
                                # LOE
# mark_end;
	.type	__sti__$E,@function
	.size	__sti__$E,.-__sti__$E
	.data
# -- End  __sti__$E
	.bss
	.align 8
	.align 8
__$U2.0.19:
	.type	__$U2.0.19,@object
	.size	__$U2.0.19,8
	.space 8	# pad
	.align 1
_ZN30_INTERNAL_9_timer_cpp_5f10fa02St8__ioinitE:
	.type	_ZN30_INTERNAL_9_timer_cpp_5f10fa02St8__ioinitE,@object
	.size	_ZN30_INTERNAL_9_timer_cpp_5f10fa02St8__ioinitE,1
	.space 1	# pad
	.section .rodata, "a"
	.align 32
.L_2il0floatpacket.2:
	.long	0xa0b5ed8d,0x3eb0c6f7,0xa0b5ed8d,0x3eb0c6f7,0xa0b5ed8d,0x3eb0c6f7,0xa0b5ed8d,0x3eb0c6f7
	.type	.L_2il0floatpacket.2,@object
	.size	.L_2il0floatpacket.2,32
	.align 32
.L_2il0floatpacket.3:
	.long	0xe2308c3a,0x3e45798e,0xe2308c3a,0x3e45798e,0xe2308c3a,0x3e45798e,0xe2308c3a,0x3e45798e
	.type	.L_2il0floatpacket.3,@object
	.size	.L_2il0floatpacket.3,32
	.align 8
.L_2il0floatpacket.4:
	.long	0x00000000,0x41cdcd65
	.type	.L_2il0floatpacket.4,@object
	.size	.L_2il0floatpacket.4,8
	.align 8
.L_2il0floatpacket.5:
	.long	0xa0b5ed8d,0x3eb0c6f7
	.type	.L_2il0floatpacket.5,@object
	.size	.L_2il0floatpacket.5,8
	.align 8
.L_2il0floatpacket.6:
	.long	0xe2308c3a,0x3e45798e
	.type	.L_2il0floatpacket.6,@object
	.size	.L_2il0floatpacket.6,8
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
	.space 2, 0x00 	# pad
	.align 4
.L_2__STRING.5:
	.word	8224
	.byte	0
	.type	.L_2__STRING.5,@object
	.size	.L_2__STRING.5,3
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
	.section .note.GNU-stack, ""
// -- Begin DWARF2 SEGMENT .eh_frame
	.section .eh_frame,"a",@progbits
.eh_frame_seg:
	.align 8
	.4byte 0x0000001c
	.8byte 0x00507a0100000000
	.4byte 0x09107801
	.byte 0x00
	.8byte __gxx_personality_v0
	.4byte 0x9008070c
	.2byte 0x0001
	.byte 0x00
	.4byte 0x00000034
	.4byte 0x00000024
	.8byte ..___tag_value_main.1
	.8byte ..___tag_value_main.162-..___tag_value_main.1
	.2byte 0x0400
	.4byte ..___tag_value_main.3-..___tag_value_main.1
	.2byte 0x100e
	.byte 0x04
	.4byte ..___tag_value_main.4-..___tag_value_main.3
	.4byte 0x8610060c
	.2byte 0x0402
	.4byte ..___tag_value_main.160-..___tag_value_main.4
	.8byte 0x00000000c608070c
	.byte 0x00
	.4byte 0x00000024
	.4byte 0x0000005c
	.8byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.163
	.8byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.168-..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.163
	.2byte 0x0400
	.4byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.165-..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.163
	.2byte 0x100e
	.byte 0x04
	.4byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.167-..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.165
	.2byte 0x080e
	.byte 0x00
	.4byte 0x00000024
	.4byte 0x00000084
	.8byte ..___tag_value___sti__$E.169
	.8byte ..___tag_value___sti__$E.175-..___tag_value___sti__$E.169
	.2byte 0x0400
	.4byte ..___tag_value___sti__$E.171-..___tag_value___sti__$E.169
	.2byte 0x100e
	.byte 0x04
	.4byte ..___tag_value___sti__$E.174-..___tag_value___sti__$E.171
	.2byte 0x080e
	.byte 0x00
# End
