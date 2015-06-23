# mark_description "Intel(R) C++ Intel(R) 64 Compiler XE for applications running on Intel(R) 64, Version 14.0.3.174 Build 20140";
# mark_description "422";
# mark_description "-std=c++11 -mavx -S -O3";
	.file "timer_16.cpp"
	.text
..TXTST0:
# -- Begin  main
# mark_begin;
       .align    16,0x90
	.globl main
main:
..B1.1:                         # Preds ..B1.0
..___tag_value_main.1:                                          #17.11
        pushq     %rbp                                          #17.11
..___tag_value_main.3:                                          #
        movq      %rsp, %rbp                                    #17.11
..___tag_value_main.4:                                          #
        andq      $-128, %rsp                                   #17.11
        subq      $1664, %rsp                                   #17.11
        movq      $0x000000000, %rsi                            #17.11
        movl      $3, %edi                                      #17.11
        call      __intel_new_feature_proc_init                 #17.11
                                # LOE rbx r12 r13 r14 r15
..B1.120:                       # Preds ..B1.1
        vstmxcsr  16(%rsp)                                      #17.11
        movl      $_ZSt4cout, %edi                              #20.5
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #20.5
        orl       $32832, 16(%rsp)                              #17.11
        vldmxcsr  16(%rsp)                                      #17.11
..___tag_value_main.6:                                          #20.5
        call      _ZNSolsEPFRSoS_E                              #20.5
..___tag_value_main.7:                                          #
                                # LOE rax rbx r12 r13 r14 r15
..B1.2:                         # Preds ..B1.120
        movq      %rax, %rdi                                    #20.11
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #20.11
..___tag_value_main.8:                                          #20.11
        call      _ZNSolsEPFRSoS_E                              #20.11
..___tag_value_main.9:                                          #
                                # LOE rax rbx r12 r13 r14 r15
..B1.3:                         # Preds ..B1.2
        movq      %rax, %rdi                                    #20.17
        movl      $.L_2__STRING.3, %esi                         #20.17
..___tag_value_main.10:                                         #20.17
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #20.17
..___tag_value_main.11:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.4:                         # Preds ..B1.3
        movq      %rax, %rdi                                    #20.49
        movl      $16, %esi                                     #20.49
..___tag_value_main.12:                                         #20.49
        call      _ZNSolsEi                                     #20.49
..___tag_value_main.13:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.5:                         # Preds ..B1.4
        movq      %rax, %rdi                                    #20.53
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #20.53
..___tag_value_main.14:                                         #20.53
        call      _ZNSolsEPFRSoS_E                              #20.53
..___tag_value_main.15:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.6:                         # Preds ..B1.5
        vmovups   16+d0_.15840.0.0.38(%rip), %xmm0              #20.94
        vmovups   %xmm0, 48(%rsp)                               #20.94
        vmovups   32+d0_.15840.0.0.38(%rip), %xmm1              #20.94
        vmovups   %xmm1, 64(%rsp)                               #20.94
        vmovups   48+d0_.15840.0.0.38(%rip), %xmm2              #20.94
        vmovups   %xmm2, 80(%rsp)                               #20.94
        vmovups   64+d0_.15840.0.0.38(%rip), %xmm3              #20.94
        vmovups   %xmm3, 96(%rsp)                               #20.94
        vmovups   80+d0_.15840.0.0.38(%rip), %xmm4              #20.94
        vmovups   %xmm4, 112(%rsp)                              #20.94
        vmovups   96+d0_.15840.0.0.38(%rip), %xmm5              #20.94
        vmovups   %xmm5, 128(%rsp)                              #20.94
        vmovups   112+d0_.15840.0.0.38(%rip), %xmm6             #20.94
        vmovups   %xmm6, 144(%rsp)                              #20.94
        vmovups   d0_.15840.0.0.38(%rip), %xmm7                 #20.94
        vmovups   %xmm7, 32(%rsp)                               #20.94
                                # LOE rbx r12 r13 r14 r15
..B1.7:                         # Preds ..B1.6
        vmovups   16+d1_.15840.0.0.38(%rip), %xmm0              #21.35
        vmovups   %xmm0, 176(%rsp)                              #21.35
        vmovups   32+d1_.15840.0.0.38(%rip), %xmm1              #21.35
        vmovups   %xmm1, 192(%rsp)                              #21.35
        vmovups   48+d1_.15840.0.0.38(%rip), %xmm2              #21.35
        vmovups   %xmm2, 208(%rsp)                              #21.35
        vmovups   64+d1_.15840.0.0.38(%rip), %xmm3              #21.35
        vmovups   %xmm3, 224(%rsp)                              #21.35
        vmovups   80+d1_.15840.0.0.38(%rip), %xmm4              #21.35
        vmovups   %xmm4, 240(%rsp)                              #21.35
        vmovups   96+d1_.15840.0.0.38(%rip), %xmm5              #21.35
        vmovups   %xmm5, 256(%rsp)                              #21.35
        vmovups   112+d1_.15840.0.0.38(%rip), %xmm6             #21.35
        vmovups   %xmm6, 272(%rsp)                              #21.35
        vmovups   d1_.15840.0.0.38(%rip), %xmm7                 #21.35
        vmovups   %xmm7, 160(%rsp)                              #21.35
                                # LOE rbx r12 r13 r14 r15
..B1.8:                         # Preds ..B1.7
        vmovups   16+d2_.15840.0.0.38(%rip), %xmm0              #22.35
        vmovups   %xmm0, 304(%rsp)                              #22.35
        vmovups   32+d2_.15840.0.0.38(%rip), %xmm1              #22.35
        vmovups   %xmm1, 320(%rsp)                              #22.35
        vmovups   48+d2_.15840.0.0.38(%rip), %xmm2              #22.35
        vmovups   %xmm2, 336(%rsp)                              #22.35
        vmovups   64+d2_.15840.0.0.38(%rip), %xmm3              #22.35
        vmovups   %xmm3, 352(%rsp)                              #22.35
        vmovups   80+d2_.15840.0.0.38(%rip), %xmm4              #22.35
        vmovups   %xmm4, 368(%rsp)                              #22.35
        vmovups   96+d2_.15840.0.0.38(%rip), %xmm5              #22.35
        vmovups   %xmm5, 384(%rsp)                              #22.35
        vmovups   112+d2_.15840.0.0.38(%rip), %xmm6             #22.35
        vmovups   %xmm6, 400(%rsp)                              #22.35
        vmovups   d2_.15840.0.0.38(%rip), %xmm7                 #22.35
        vmovups   %xmm7, 288(%rsp)                              #22.35
                                # LOE rbx r12 r13 r14 r15
..B1.9:                         # Preds ..B1.8
        vpxor     %xmm0, %xmm0, %xmm0                           #23.34
        vmovups   %xmm0, 432(%rsp)                              #23.34
        vmovups   %xmm0, 448(%rsp)                              #23.34
        vmovups   %xmm0, 464(%rsp)                              #23.34
        vmovups   %xmm0, 480(%rsp)                              #23.34
        vmovups   %xmm0, 496(%rsp)                              #23.34
        vmovups   %xmm0, 512(%rsp)                              #23.34
        vmovups   %xmm0, 528(%rsp)                              #23.34
        vmovups   %xmm0, 416(%rsp)                              #23.34
                                # LOE rbx r12 r13 r14 r15
..B1.10:                        # Preds ..B1.9
        vmovups   16+d0.15840.0.0.38(%rip), %xmm0               #26.28
        vmovups   %xmm0, 560(%rsp)                              #26.28
        vmovups   32+d0.15840.0.0.38(%rip), %xmm1               #26.28
        vmovups   %xmm1, 576(%rsp)                              #26.28
        vmovups   48+d0.15840.0.0.38(%rip), %xmm2               #26.28
        vmovups   %xmm2, 592(%rsp)                              #26.28
        vmovups   64+d0.15840.0.0.38(%rip), %xmm3               #26.28
        vmovups   %xmm3, 608(%rsp)                              #26.28
        vmovups   80+d0.15840.0.0.38(%rip), %xmm4               #26.28
        vmovups   %xmm4, 624(%rsp)                              #26.28
        vmovups   96+d0.15840.0.0.38(%rip), %xmm5               #26.28
        vmovups   %xmm5, 640(%rsp)                              #26.28
        vmovups   112+d0.15840.0.0.38(%rip), %xmm6              #26.28
        vmovups   %xmm6, 656(%rsp)                              #26.28
        vmovups   d0.15840.0.0.38(%rip), %xmm7                  #26.28
        vmovups   %xmm7, 544(%rsp)                              #26.28
                                # LOE rbx r12 r13 r14 r15
..B1.11:                        # Preds ..B1.10
        vmovups   16+d1.15840.0.0.38(%rip), %xmm0               #27.28
        vmovups   %xmm0, 688(%rsp)                              #27.28
        vmovups   32+d1.15840.0.0.38(%rip), %xmm1               #27.28
        vmovups   %xmm1, 704(%rsp)                              #27.28
        vmovups   48+d1.15840.0.0.38(%rip), %xmm2               #27.28
        vmovups   %xmm2, 720(%rsp)                              #27.28
        vmovups   64+d1.15840.0.0.38(%rip), %xmm3               #27.28
        vmovups   %xmm3, 736(%rsp)                              #27.28
        vmovups   80+d1.15840.0.0.38(%rip), %xmm4               #27.28
        vmovups   %xmm4, 752(%rsp)                              #27.28
        vmovups   96+d1.15840.0.0.38(%rip), %xmm5               #27.28
        vmovups   %xmm5, 768(%rsp)                              #27.28
        vmovups   112+d1.15840.0.0.38(%rip), %xmm6              #27.28
        vmovups   %xmm6, 784(%rsp)                              #27.28
        vmovups   d1.15840.0.0.38(%rip), %xmm7                  #27.28
        vmovups   %xmm7, 672(%rsp)                              #27.28
                                # LOE rbx r12 r13 r14 r15
..B1.12:                        # Preds ..B1.11
        vmovups   16+d2.15840.0.0.38(%rip), %xmm0               #28.29
        vmovups   %xmm0, 816(%rsp)                              #28.29
        vmovups   32+d2.15840.0.0.38(%rip), %xmm1               #28.29
        vmovups   %xmm1, 832(%rsp)                              #28.29
        vmovups   48+d2.15840.0.0.38(%rip), %xmm2               #28.29
        vmovups   %xmm2, 848(%rsp)                              #28.29
        vmovups   64+d2.15840.0.0.38(%rip), %xmm3               #28.29
        vmovups   %xmm3, 864(%rsp)                              #28.29
        vmovups   80+d2.15840.0.0.38(%rip), %xmm4               #28.29
        vmovups   %xmm4, 880(%rsp)                              #28.29
        vmovups   96+d2.15840.0.0.38(%rip), %xmm5               #28.29
        vmovups   %xmm5, 896(%rsp)                              #28.29
        vmovups   112+d2.15840.0.0.38(%rip), %xmm6              #28.29
        vmovups   %xmm6, 912(%rsp)                              #28.29
        vmovups   d2.15840.0.0.38(%rip), %xmm7                  #28.29
        vmovups   %xmm7, 800(%rsp)                              #28.29
                                # LOE rbx r12 r13 r14 r15
..B1.13:                        # Preds ..B1.12
        vpxor     %xmm0, %xmm0, %xmm0                           #29.27
        vmovups   %xmm0, 944(%rsp)                              #29.27
        vmovups   %xmm0, 960(%rsp)                              #29.27
        vmovups   %xmm0, 976(%rsp)                              #29.27
        vmovups   %xmm0, 992(%rsp)                              #29.27
        vmovups   %xmm0, 1008(%rsp)                             #29.27
        vmovups   %xmm0, 1024(%rsp)                             #29.27
        vmovups   %xmm0, 1040(%rsp)                             #29.27
        vmovups   %xmm0, 928(%rsp)                              #29.27
                                # LOE rbx r12 r13 r14 r15
..B1.14:                        # Preds ..B1.13
        movq      __$U3.0.19(%rip), %rax                        #32.53
        movq      %rax, 1056(%rsp)                              #32.53
        movq      %rax, 1064(%rsp)                              #32.60
..___tag_value_main.16:                                         #33.17
        call      _ZNSt6chrono3_V212system_clock3nowEv          #33.17
..___tag_value_main.17:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.124:                       # Preds ..B1.14
        movq      %rax, 1056(%rsp)                              #33.17
                                # LOE rbx r12 r13 r14 r15
..B1.15:                        # Preds ..B1.124
        vmovupd   32(%rsp), %ymm0                               #41.4
        vmovupd   64(%rsp), %ymm1                               #41.4
        vmovupd   96(%rsp), %ymm2                               #41.4
        vmovupd   128(%rsp), %ymm3                              #41.4
        vmovupd   192(%rsp), %ymm5                              #42.4
        vmovupd   160(%rsp), %ymm4                              #42.4
        vmovupd   224(%rsp), %ymm6                              #42.4
        vmovupd   256(%rsp), %ymm7                              #42.4
        vmovupd   320(%rsp), %ymm9                              #43.4
        vmovupd   288(%rsp), %ymm8                              #43.4
        vmovupd   352(%rsp), %ymm10                             #43.4
        vmovupd   384(%rsp), %ymm11                             #43.4
        vmovupd   448(%rsp), %ymm13                             #44.6
        vmovupd   416(%rsp), %ymm12                             #44.6
        vmovupd   480(%rsp), %ymm14                             #44.6
        vmovupd   512(%rsp), %ymm15                             #44.6
        vmovupd   %ymm0, 1344(%rsp)                             #41.2
        vmovupd   %ymm1, 1376(%rsp)                             #41.2
        vmovupd   %ymm2, 1408(%rsp)                             #41.2
        vmovupd   %ymm3, 1440(%rsp)                             #41.2
        vmovupd   %ymm4, 1472(%rsp)                             #42.2
        vmovupd   %ymm5, 1504(%rsp)                             #42.2
        vmovupd   %ymm6, 1536(%rsp)                             #42.2
        vmovupd   %ymm7, 1568(%rsp)                             #42.2
        vmovupd   %ymm8, 1088(%rsp)                             #43.2
        vmovupd   %ymm9, 1120(%rsp)                             #43.2
        vmovupd   %ymm10, 1152(%rsp)                            #43.2
        vmovupd   %ymm11, 1184(%rsp)                            #43.2
        vmovupd   %ymm12, 1216(%rsp)                            #44.2
        vmovupd   %ymm13, 1248(%rsp)                            #44.2
        vmovupd   %ymm14, 1280(%rsp)                            #44.2
        vmovupd   %ymm15, 1312(%rsp)                            #44.2
                                # LOE rbx r12 r13 r14 r15
..B1.126:                       # Preds ..B1.15
# Begin ASM
# #start simd
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.125:                       # Preds ..B1.126
        xorl      %eax, %eax                                    #48.13
                                # LOE rbx r12 r13 r14 r15 eax
..B1.16:                        # Preds ..B1.21 ..B1.125
        vzeroupper                                              #50.27
        vmovups   1360(%rsp), %xmm0                             #50.27
        vmovups   %xmm0, 48(%rsp)                               #50.27
        vmovups   1376(%rsp), %xmm1                             #50.27
        vmovups   %xmm1, 64(%rsp)                               #50.27
        vmovups   1392(%rsp), %xmm2                             #50.27
        vmovups   %xmm2, 80(%rsp)                               #50.27
        vmovups   1408(%rsp), %xmm3                             #50.27
        vmovups   %xmm3, 96(%rsp)                               #50.27
        vmovups   1424(%rsp), %xmm4                             #50.27
        vmovups   %xmm4, 112(%rsp)                              #50.27
        vmovups   1440(%rsp), %xmm5                             #50.27
        vmovups   %xmm5, 128(%rsp)                              #50.27
        vmovups   1456(%rsp), %xmm6                             #50.27
        vmovups   %xmm6, 144(%rsp)                              #50.27
        vmovups   1344(%rsp), %xmm7                             #50.27
        vmovups   %xmm7, 32(%rsp)                               #50.27
                                # LOE rbx r12 r13 r14 r15 eax
..B1.17:                        # Preds ..B1.16
        vmovups   1488(%rsp), %xmm0                             #50.27
        vmovups   %xmm0, 176(%rsp)                              #50.27
        vmovups   1504(%rsp), %xmm1                             #50.27
        vmovups   %xmm1, 192(%rsp)                              #50.27
        vmovups   1520(%rsp), %xmm2                             #50.27
        vmovups   %xmm2, 208(%rsp)                              #50.27
        vmovups   1536(%rsp), %xmm3                             #50.27
        vmovups   %xmm3, 224(%rsp)                              #50.27
        vmovups   1552(%rsp), %xmm4                             #50.27
        vmovups   %xmm4, 240(%rsp)                              #50.27
        vmovups   1568(%rsp), %xmm5                             #50.27
        vmovups   %xmm5, 256(%rsp)                              #50.27
        vmovups   1584(%rsp), %xmm6                             #50.27
        vmovups   %xmm6, 272(%rsp)                              #50.27
        vmovups   1472(%rsp), %xmm7                             #50.27
        vmovups   %xmm7, 160(%rsp)                              #50.27
                                # LOE rbx r12 r13 r14 r15 eax
..B1.18:                        # Preds ..B1.17
        vmovupd   32(%rsp), %ymm0                               #50.27
        vmovupd   64(%rsp), %ymm1                               #50.27
        vmovupd   96(%rsp), %ymm2                               #50.27
        vmovupd   128(%rsp), %ymm3                              #50.27
        vmovupd   .L_2il0floatpacket.280(%rip), %ymm10          #50.27
        vmulpd    160(%rsp), %ymm0, %ymm4                       #50.27
        vmulpd    192(%rsp), %ymm1, %ymm6                       #50.27
        vmulpd    224(%rsp), %ymm2, %ymm8                       #50.27
        vmulpd    256(%rsp), %ymm3, %ymm11                      #50.27
        vmulpd    %ymm4, %ymm10, %ymm5                          #50.27
        vmulpd    %ymm6, %ymm10, %ymm7                          #50.27
        vmulpd    %ymm8, %ymm10, %ymm9                          #50.27
        vmulpd    %ymm11, %ymm10, %ymm12                        #50.27
        vmovupd   %ymm5, 736(%rsp)                              #50.27
        vmovupd   %ymm7, 704(%rsp)                              #50.27
        vmovupd   %ymm9, 672(%rsp)                              #50.27
        vmovupd   %ymm12, 768(%rsp)                             #50.27
        vzeroupper                                              #50.32
        vmovups   1104(%rsp), %xmm13                            #50.32
        vmovups   %xmm13, 304(%rsp)                             #50.32
        vmovups   1120(%rsp), %xmm14                            #50.32
        vmovups   %xmm14, 320(%rsp)                             #50.32
        vmovups   1136(%rsp), %xmm15                            #50.32
        vmovups   %xmm15, 336(%rsp)                             #50.32
        vmovups   1152(%rsp), %xmm0                             #50.32
        vmovups   %xmm0, 352(%rsp)                              #50.32
        vmovups   1168(%rsp), %xmm1                             #50.32
        vmovups   %xmm1, 368(%rsp)                              #50.32
        vmovups   1184(%rsp), %xmm2                             #50.32
        vmovups   %xmm2, 384(%rsp)                              #50.32
        vmovups   1200(%rsp), %xmm3                             #50.32
        vmovups   %xmm3, 400(%rsp)                              #50.32
        vmovups   1088(%rsp), %xmm4                             #50.32
        vmovups   %xmm4, 288(%rsp)                              #50.32
                                # LOE rbx r12 r13 r14 r15 eax
..B1.19:                        # Preds ..B1.18
        vmovupd   736(%rsp), %ymm0                              #50.32
        vmovupd   704(%rsp), %ymm1                              #50.32
        vmovupd   672(%rsp), %ymm2                              #50.32
        vmovupd   768(%rsp), %ymm3                              #50.32
        vaddpd    288(%rsp), %ymm0, %ymm4                       #50.32
        vaddpd    320(%rsp), %ymm1, %ymm6                       #50.32
        vaddpd    352(%rsp), %ymm2, %ymm8                       #50.32
        vaddpd    384(%rsp), %ymm3, %ymm10                      #50.32
        vaddpd    1248(%rsp), %ymm6, %ymm7                      #50.10
        vaddpd    1216(%rsp), %ymm4, %ymm5                      #50.10
        vaddpd    1280(%rsp), %ymm8, %ymm9                      #50.10
        vaddpd    1312(%rsp), %ymm10, %ymm11                    #50.10
        vmovupd   %ymm5, 1216(%rsp)                             #50.6
        vmovupd   %ymm7, 1248(%rsp)                             #50.6
        vmovupd   %ymm9, 1280(%rsp)                             #50.6
        vmovupd   %ymm11, 1312(%rsp)                            #50.6
        vzeroupper                                              #51.19
        vmovups   1232(%rsp), %xmm12                            #51.19
        vmovups   %xmm12, 432(%rsp)                             #51.19
        vmovups   1248(%rsp), %xmm13                            #51.19
        vmovups   %xmm13, 448(%rsp)                             #51.19
        vmovups   1264(%rsp), %xmm14                            #51.19
        vmovups   %xmm14, 464(%rsp)                             #51.19
        vmovups   1280(%rsp), %xmm15                            #51.19
        vmovups   %xmm15, 480(%rsp)                             #51.19
        vmovups   1296(%rsp), %xmm0                             #51.19
        vmovups   %xmm0, 496(%rsp)                              #51.19
        vmovups   1312(%rsp), %xmm1                             #51.19
        vmovups   %xmm1, 512(%rsp)                              #51.19
        vmovups   1328(%rsp), %xmm2                             #51.19
        vmovups   %xmm2, 528(%rsp)                              #51.19
        vmovups   1216(%rsp), %xmm3                             #51.19
        vmovups   %xmm3, 416(%rsp)                              #51.19
                                # LOE rbx r12 r13 r14 r15 eax
..B1.20:                        # Preds ..B1.19
        vmovupd   .L_2il0floatpacket.281(%rip), %ymm3           #51.19
        vmulpd    416(%rsp), %ymm3, %ymm0                       #51.19
        vmulpd    448(%rsp), %ymm3, %ymm1                       #51.19
        vmulpd    480(%rsp), %ymm3, %ymm2                       #51.19
        vmulpd    512(%rsp), %ymm3, %ymm4                       #51.19
        vmovupd   %ymm0, 544(%rsp)                              #51.19
        vmovupd   %ymm1, 576(%rsp)                              #51.19
        vmovupd   %ymm2, 608(%rsp)                              #51.19
        vmovupd   %ymm4, 640(%rsp)                              #51.19
        vzeroupper                                              #51.19
        vmovups   560(%rsp), %xmm5                              #51.19
        vmovups   %xmm5, 1104(%rsp)                             #51.19
        vmovups   576(%rsp), %xmm6                              #51.19
        vmovups   %xmm6, 1120(%rsp)                             #51.19
        vmovups   592(%rsp), %xmm7                              #51.19
        vmovups   %xmm7, 1136(%rsp)                             #51.19
        vmovups   608(%rsp), %xmm8                              #51.19
        vmovups   %xmm8, 1152(%rsp)                             #51.19
        vmovups   624(%rsp), %xmm9                              #51.19
        vmovups   %xmm9, 1168(%rsp)                             #51.19
        vmovups   640(%rsp), %xmm10                             #51.19
        vmovups   %xmm10, 1184(%rsp)                            #51.19
        vmovups   656(%rsp), %xmm11                             #51.19
        vmovups   %xmm11, 1200(%rsp)                            #51.19
        vmovups   544(%rsp), %xmm12                             #51.19
        vmovups   %xmm12, 1088(%rsp)                            #51.19
                                # LOE rbx r12 r13 r14 r15 eax
..B1.21:                        # Preds ..B1.20
        incl      %eax                                          #48.33
        cmpl      $100000000, %eax                              #48.22
        jl        ..B1.16       # Prob 100%                     #48.22
                                # LOE rbx r12 r13 r14 r15 eax
..B1.22:                        # Preds ..B1.21
# Begin ASM
# #end simd
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.128:                       # Preds ..B1.22
..___tag_value_main.18:                                         #55.8
        call      _ZNSt6chrono3_V212system_clock3nowEv          #55.8
..___tag_value_main.19:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.127:                       # Preds ..B1.128
        movq      %rax, 1064(%rsp)                              #55.8
                                # LOE rbx r12 r13 r14 r15
..B1.23:                        # Preds ..B1.127
        movq      1064(%rsp), %rax                              #56.50
        movl      $.L_2__STRING.4, %esi                         #58.11
        movq      1056(%rsp), %rdx                              #56.54
        movl      $_ZSt4cout, %edi                              #58.11
        movq      %rax, 24(%rsp)                                #56.50
        movq      %rdx, 16(%rsp)                                #56.54
..___tag_value_main.20:                                         #58.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.11
..___tag_value_main.21:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.129:                       # Preds ..B1.23
        movq      %rax, %rdi                                    #58.11
                                # LOE rbx rdi r12 r13 r14 r15
..B1.24:                        # Preds ..B1.129
        movq      24(%rsp), %rax                                #58.38
        vxorpd    %xmm0, %xmm0, %xmm0                           #58.38
        subq      16(%rsp), %rax                                #58.38
        vcvtsi2sdq %rax, %xmm0, %xmm0                           #58.38
        vdivsd    .L_2il0floatpacket.282(%rip), %xmm0, %xmm0    #58.38
..___tag_value_main.22:                                         #58.38
        call      _ZNSolsEd                                     #58.38
..___tag_value_main.23:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.25:                        # Preds ..B1.24
        movl      $.L_2__STRING.5, %esi                         #58.64
        movq      %rax, %rdi                                    #58.64
..___tag_value_main.24:                                         #58.64
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #58.64
..___tag_value_main.25:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.26:                        # Preds ..B1.25
        movq      %rax, %rdi                                    #58.70
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #58.70
..___tag_value_main.26:                                         #58.70
        call      _ZNSolsEPFRSoS_E                              #58.70
..___tag_value_main.27:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.27:                        # Preds ..B1.26
        vmovups   1232(%rsp), %xmm0                             #59.11
        vmovups   %xmm0, 176(%rsp)                              #59.11
        vmovups   1248(%rsp), %xmm1                             #59.11
        vmovups   %xmm1, 192(%rsp)                              #59.11
        vmovups   1264(%rsp), %xmm2                             #59.11
        vmovups   %xmm2, 208(%rsp)                              #59.11
        vmovups   1280(%rsp), %xmm3                             #59.11
        vmovups   %xmm3, 224(%rsp)                              #59.11
        vmovups   1296(%rsp), %xmm4                             #59.11
        vmovups   %xmm4, 240(%rsp)                              #59.11
        vmovups   1312(%rsp), %xmm5                             #59.11
        vmovups   %xmm5, 256(%rsp)                              #59.11
        vmovups   1328(%rsp), %xmm6                             #59.11
        vmovups   %xmm6, 272(%rsp)                              #59.11
        vmovups   1216(%rsp), %xmm7                             #59.11
        vmovups   %xmm7, 160(%rsp)                              #59.11
                                # LOE rbx r12 r13 r14 r15
..B1.28:                        # Preds ..B1.27
        vmovupd   160(%rsp), %ymm0                              #59.11
        movl      $.L_2__STRING.0, %esi                         #59.11
        vmovupd   192(%rsp), %ymm1                              #59.11
        vmovupd   224(%rsp), %ymm2                              #59.11
        vmovupd   256(%rsp), %ymm3                              #59.11
        movl      $_ZSt4cout, %edi                              #59.11
        vmovupd   %xmm0, 16(%rsp)                               #59.11
        vmovupd   %xmm1, 48(%rsp)                               #59.11
        vmovupd   %xmm2, 80(%rsp)                               #59.11
        vmovupd   %xmm3, 112(%rsp)                              #59.11
        vextractf128 $1, %ymm0, 32(%rsp)                        #59.11
        vextractf128 $1, %ymm1, 64(%rsp)                        #59.11
        vextractf128 $1, %ymm2, 96(%rsp)                        #59.11
        vextractf128 $1, %ymm3, 128(%rsp)                       #59.11
        vzeroupper                                              #59.11
..___tag_value_main.28:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.29:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.29:                        # Preds ..B1.28
        movq      %rax, %rdi                                    #59.11
        vmovsd    16(%rsp), %xmm0                               #59.11
..___tag_value_main.30:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.31:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.30:                        # Preds ..B1.29
        movl      $.L_2__STRING.1, %esi                         #59.11
        movq      %rax, %rdi                                    #59.11
..___tag_value_main.32:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.33:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.31:                        # Preds ..B1.30
        movq      %rax, %rdi                                    #59.11
        vmovsd    24(%rsp), %xmm0                               #59.11
..___tag_value_main.34:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.35:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.32:                        # Preds ..B1.31
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.36:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.37:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.33:                        # Preds ..B1.32
        movq      %rax, %rdi                                    #59.11
        vmovsd    32(%rsp), %xmm0                               #59.11
..___tag_value_main.38:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.39:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.34:                        # Preds ..B1.33
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.40:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.41:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.35:                        # Preds ..B1.34
        movq      %rax, %rdi                                    #59.11
        vmovsd    40(%rsp), %xmm0                               #59.11
..___tag_value_main.42:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.43:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.36:                        # Preds ..B1.35
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.44:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.45:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.37:                        # Preds ..B1.36
        movq      %rax, %rdi                                    #59.11
        vmovsd    48(%rsp), %xmm0                               #59.11
..___tag_value_main.46:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.47:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.38:                        # Preds ..B1.37
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.48:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.49:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.39:                        # Preds ..B1.38
        movq      %rax, %rdi                                    #59.11
        vmovsd    56(%rsp), %xmm0                               #59.11
..___tag_value_main.50:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.51:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.40:                        # Preds ..B1.39
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.52:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.53:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.41:                        # Preds ..B1.40
        movq      %rax, %rdi                                    #59.11
        vmovsd    64(%rsp), %xmm0                               #59.11
..___tag_value_main.54:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.55:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.42:                        # Preds ..B1.41
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.56:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.57:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.43:                        # Preds ..B1.42
        movq      %rax, %rdi                                    #59.11
        vmovsd    72(%rsp), %xmm0                               #59.11
..___tag_value_main.58:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.59:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.44:                        # Preds ..B1.43
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.60:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.61:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.45:                        # Preds ..B1.44
        movq      %rax, %rdi                                    #59.11
        vmovsd    80(%rsp), %xmm0                               #59.11
..___tag_value_main.62:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.63:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.46:                        # Preds ..B1.45
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.64:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.65:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.47:                        # Preds ..B1.46
        movq      %rax, %rdi                                    #59.11
        vmovsd    88(%rsp), %xmm0                               #59.11
..___tag_value_main.66:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.67:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.48:                        # Preds ..B1.47
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.68:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.69:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.49:                        # Preds ..B1.48
        movq      %rax, %rdi                                    #59.11
        vmovsd    96(%rsp), %xmm0                               #59.11
..___tag_value_main.70:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.71:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.50:                        # Preds ..B1.49
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.72:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.73:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.51:                        # Preds ..B1.50
        movq      %rax, %rdi                                    #59.11
        vmovsd    104(%rsp), %xmm0                              #59.11
..___tag_value_main.74:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.75:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.52:                        # Preds ..B1.51
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.76:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.77:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.53:                        # Preds ..B1.52
        movq      %rax, %rdi                                    #59.11
        vmovsd    112(%rsp), %xmm0                              #59.11
..___tag_value_main.78:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.79:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.54:                        # Preds ..B1.53
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.80:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.81:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.55:                        # Preds ..B1.54
        movq      %rax, %rdi                                    #59.11
        vmovsd    120(%rsp), %xmm0                              #59.11
..___tag_value_main.82:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.83:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.56:                        # Preds ..B1.55
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.84:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.85:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.57:                        # Preds ..B1.56
        movq      %rax, %rdi                                    #59.11
        vmovsd    128(%rsp), %xmm0                              #59.11
..___tag_value_main.86:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.87:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.58:                        # Preds ..B1.57
        movq      %rax, %rdi                                    #59.11
        movl      $.L_2__STRING.1, %esi                         #59.11
..___tag_value_main.88:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.89:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.59:                        # Preds ..B1.58
        movq      %rax, %rdi                                    #59.11
        vmovsd    136(%rsp), %xmm0                              #59.11
..___tag_value_main.90:                                         #59.11
        call      _ZNSolsEd                                     #59.11
..___tag_value_main.91:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.60:                        # Preds ..B1.59
        movl      $.L_2__STRING.2, %esi                         #59.11
        movq      %rax, %rdi                                    #59.11
..___tag_value_main.92:                                         #59.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.11
..___tag_value_main.93:                                         #
                                # LOE rbx r12 r13 r14 r15
..B1.61:                        # Preds ..B1.60
        vmovups   1104(%rsp), %xmm0                             #59.16
        vmovups   %xmm0, 176(%rsp)                              #59.16
        vmovups   1120(%rsp), %xmm1                             #59.16
        vmovups   %xmm1, 192(%rsp)                              #59.16
        vmovups   1136(%rsp), %xmm2                             #59.16
        vmovups   %xmm2, 208(%rsp)                              #59.16
        vmovups   1152(%rsp), %xmm3                             #59.16
        vmovups   %xmm3, 224(%rsp)                              #59.16
        vmovups   1168(%rsp), %xmm4                             #59.16
        vmovups   %xmm4, 240(%rsp)                              #59.16
        vmovups   1184(%rsp), %xmm5                             #59.16
        vmovups   %xmm5, 256(%rsp)                              #59.16
        vmovups   1200(%rsp), %xmm6                             #59.16
        vmovups   %xmm6, 272(%rsp)                              #59.16
        vmovups   1088(%rsp), %xmm7                             #59.16
        vmovups   %xmm7, 160(%rsp)                              #59.16
                                # LOE rbx r12 r13 r14 r15
..B1.62:                        # Preds ..B1.61
        vmovupd   160(%rsp), %ymm0                              #59.16
        movl      $_ZSt4cout, %edi                              #59.16
        vmovupd   192(%rsp), %ymm1                              #59.16
        vmovupd   224(%rsp), %ymm2                              #59.16
        vmovupd   256(%rsp), %ymm3                              #59.16
        movl      $.L_2__STRING.0, %esi                         #59.16
        vmovupd   %xmm0, 16(%rsp)                               #59.16
        vmovupd   %xmm1, 48(%rsp)                               #59.16
        vmovupd   %xmm2, 80(%rsp)                               #59.16
        vmovupd   %xmm3, 112(%rsp)                              #59.16
        vextractf128 $1, %ymm0, 32(%rsp)                        #59.16
        vextractf128 $1, %ymm1, 64(%rsp)                        #59.16
        vextractf128 $1, %ymm2, 96(%rsp)                        #59.16
        vextractf128 $1, %ymm3, 128(%rsp)                       #59.16
        vzeroupper                                              #59.16
..___tag_value_main.94:                                         #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.95:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.63:                        # Preds ..B1.62
        movq      %rax, %rdi                                    #59.16
        vmovsd    16(%rsp), %xmm0                               #59.16
..___tag_value_main.96:                                         #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.97:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.64:                        # Preds ..B1.63
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.98:                                         #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.99:                                         #
                                # LOE rax rbx r12 r13 r14 r15
..B1.65:                        # Preds ..B1.64
        movq      %rax, %rdi                                    #59.16
        vmovsd    24(%rsp), %xmm0                               #59.16
..___tag_value_main.100:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.101:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.66:                        # Preds ..B1.65
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.102:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.103:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.67:                        # Preds ..B1.66
        movq      %rax, %rdi                                    #59.16
        vmovsd    32(%rsp), %xmm0                               #59.16
..___tag_value_main.104:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.105:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.68:                        # Preds ..B1.67
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.106:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.107:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.69:                        # Preds ..B1.68
        movq      %rax, %rdi                                    #59.16
        vmovsd    40(%rsp), %xmm0                               #59.16
..___tag_value_main.108:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.109:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.70:                        # Preds ..B1.69
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.110:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.111:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.71:                        # Preds ..B1.70
        movq      %rax, %rdi                                    #59.16
        vmovsd    48(%rsp), %xmm0                               #59.16
..___tag_value_main.112:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.113:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.72:                        # Preds ..B1.71
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.114:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.115:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.73:                        # Preds ..B1.72
        movq      %rax, %rdi                                    #59.16
        vmovsd    56(%rsp), %xmm0                               #59.16
..___tag_value_main.116:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.117:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.74:                        # Preds ..B1.73
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.118:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.119:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.75:                        # Preds ..B1.74
        movq      %rax, %rdi                                    #59.16
        vmovsd    64(%rsp), %xmm0                               #59.16
..___tag_value_main.120:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.121:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.76:                        # Preds ..B1.75
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.122:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.123:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.77:                        # Preds ..B1.76
        movq      %rax, %rdi                                    #59.16
        vmovsd    72(%rsp), %xmm0                               #59.16
..___tag_value_main.124:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.125:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.78:                        # Preds ..B1.77
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.126:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.127:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.79:                        # Preds ..B1.78
        movq      %rax, %rdi                                    #59.16
        vmovsd    80(%rsp), %xmm0                               #59.16
..___tag_value_main.128:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.129:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.80:                        # Preds ..B1.79
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.130:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.131:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.81:                        # Preds ..B1.80
        movq      %rax, %rdi                                    #59.16
        vmovsd    88(%rsp), %xmm0                               #59.16
..___tag_value_main.132:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.133:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.82:                        # Preds ..B1.81
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.134:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.135:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.83:                        # Preds ..B1.82
        movq      %rax, %rdi                                    #59.16
        vmovsd    96(%rsp), %xmm0                               #59.16
..___tag_value_main.136:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.137:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.84:                        # Preds ..B1.83
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.138:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.139:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.85:                        # Preds ..B1.84
        movq      %rax, %rdi                                    #59.16
        vmovsd    104(%rsp), %xmm0                              #59.16
..___tag_value_main.140:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.141:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.86:                        # Preds ..B1.85
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.142:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.143:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.87:                        # Preds ..B1.86
        movq      %rax, %rdi                                    #59.16
        vmovsd    112(%rsp), %xmm0                              #59.16
..___tag_value_main.144:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.145:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.88:                        # Preds ..B1.87
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.146:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.147:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.89:                        # Preds ..B1.88
        movq      %rax, %rdi                                    #59.16
        vmovsd    120(%rsp), %xmm0                              #59.16
..___tag_value_main.148:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.149:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.90:                        # Preds ..B1.89
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.150:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.151:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.91:                        # Preds ..B1.90
        movq      %rax, %rdi                                    #59.16
        vmovsd    128(%rsp), %xmm0                              #59.16
..___tag_value_main.152:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.153:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.92:                        # Preds ..B1.91
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.1, %esi                         #59.16
..___tag_value_main.154:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.155:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.93:                        # Preds ..B1.92
        movq      %rax, %rdi                                    #59.16
        vmovsd    136(%rsp), %xmm0                              #59.16
..___tag_value_main.156:                                        #59.16
        call      _ZNSolsEd                                     #59.16
..___tag_value_main.157:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.94:                        # Preds ..B1.93
        movq      %rax, %rdi                                    #59.16
        movl      $.L_2__STRING.2, %esi                         #59.16
..___tag_value_main.158:                                        #59.16
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #59.16
..___tag_value_main.159:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.95:                        # Preds ..B1.94
        movl      $_ZSt4cout, %edi                              #59.19
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #59.19
..___tag_value_main.160:                                        #59.19
        call      _ZNSolsEPFRSoS_E                              #59.19
..___tag_value_main.161:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.96:                        # Preds ..B1.95
        vmovups   16+d0.16534.0.0.38(%rip), %xmm0               #65.29
        vmovups   %xmm0, 432(%rsp)                              #65.29
        vmovups   32+d0.16534.0.0.38(%rip), %xmm1               #65.29
        vmovups   %xmm1, 448(%rsp)                              #65.29
        vmovups   48+d0.16534.0.0.38(%rip), %xmm2               #65.29
        vmovups   %xmm2, 464(%rsp)                              #65.29
        vmovups   64+d0.16534.0.0.38(%rip), %xmm3               #65.29
        vmovups   %xmm3, 480(%rsp)                              #65.29
        vmovups   80+d0.16534.0.0.38(%rip), %xmm4               #65.29
        vmovups   %xmm4, 496(%rsp)                              #65.29
        vmovups   96+d0.16534.0.0.38(%rip), %xmm5               #65.29
        vmovups   %xmm5, 512(%rsp)                              #65.29
        vmovups   112+d0.16534.0.0.38(%rip), %xmm6              #65.29
        vmovups   %xmm6, 528(%rsp)                              #65.29
        vmovups   d0.16534.0.0.38(%rip), %xmm7                  #65.29
        vmovups   %xmm7, 416(%rsp)                              #65.29
                                # LOE rbx r12 r13 r14 r15
..B1.97:                        # Preds ..B1.96
        vmovups   16+d1.16534.0.0.38(%rip), %xmm0               #66.28
        vmovups   %xmm0, 560(%rsp)                              #66.28
        vmovups   32+d1.16534.0.0.38(%rip), %xmm1               #66.28
        vmovups   %xmm1, 576(%rsp)                              #66.28
        vmovups   48+d1.16534.0.0.38(%rip), %xmm2               #66.28
        vmovups   %xmm2, 592(%rsp)                              #66.28
        vmovups   64+d1.16534.0.0.38(%rip), %xmm3               #66.28
        vmovups   %xmm3, 608(%rsp)                              #66.28
        vmovups   80+d1.16534.0.0.38(%rip), %xmm4               #66.28
        vmovups   %xmm4, 624(%rsp)                              #66.28
        vmovups   96+d1.16534.0.0.38(%rip), %xmm5               #66.28
        vmovups   %xmm5, 640(%rsp)                              #66.28
        vmovups   112+d1.16534.0.0.38(%rip), %xmm6              #66.28
        vmovups   %xmm6, 656(%rsp)                              #66.28
        vmovups   d1.16534.0.0.38(%rip), %xmm7                  #66.28
        vmovups   %xmm7, 544(%rsp)                              #66.28
                                # LOE rbx r12 r13 r14 r15
..B1.98:                        # Preds ..B1.97
        vmovups   16+d2.16534.0.0.38(%rip), %xmm0               #67.28
        vmovups   %xmm0, 176(%rsp)                              #67.28
        vmovups   32+d2.16534.0.0.38(%rip), %xmm1               #67.28
        vmovups   %xmm1, 192(%rsp)                              #67.28
        vmovups   48+d2.16534.0.0.38(%rip), %xmm2               #67.28
        vmovups   %xmm2, 208(%rsp)                              #67.28
        vmovups   64+d2.16534.0.0.38(%rip), %xmm3               #67.28
        vmovups   %xmm3, 224(%rsp)                              #67.28
        vmovups   80+d2.16534.0.0.38(%rip), %xmm4               #67.28
        vmovups   %xmm4, 240(%rsp)                              #67.28
        vmovups   96+d2.16534.0.0.38(%rip), %xmm5               #67.28
        vmovups   %xmm5, 256(%rsp)                              #67.28
        vmovups   112+d2.16534.0.0.38(%rip), %xmm6              #67.28
        vmovups   %xmm6, 272(%rsp)                              #67.28
        vmovups   d2.16534.0.0.38(%rip), %xmm7                  #67.28
        vmovups   %xmm7, 160(%rsp)                              #67.28
                                # LOE rbx r12 r13 r14 r15
..B1.99:                        # Preds ..B1.98
        vpxor     %xmm0, %xmm0, %xmm0                           #68.27
        vmovups   %xmm0, 304(%rsp)                              #68.27
        vmovups   %xmm0, 320(%rsp)                              #68.27
        vmovups   %xmm0, 336(%rsp)                              #68.27
        vmovups   %xmm0, 352(%rsp)                              #68.27
        vmovups   %xmm0, 368(%rsp)                              #68.27
        vmovups   %xmm0, 384(%rsp)                              #68.27
        vmovups   %xmm0, 400(%rsp)                              #68.27
        vmovups   %xmm0, 288(%rsp)                              #68.27
                                # LOE rbx r12 r13 r14 r15
..B1.100:                       # Preds ..B1.99
        movq      __$U3.0.19(%rip), %rax                        #71.53
        movq      %rax, 16(%rsp)                                #71.53
        movq      %rax, 40(%rsp)                                #71.60
..___tag_value_main.162:                                        #72.10
        call      _ZNSt6chrono3_V212system_clock3nowEv          #72.10
..___tag_value_main.163:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.196:                       # Preds ..B1.100
        movq      %rax, 16(%rsp)                                #72.10
                                # LOE rbx r12 r13 r14 r15
..B1.101:                       # Preds ..B1.196
# Begin ASM
# #start scalar
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.197:                       # Preds ..B1.101
        vmovupd   .L_2il0floatpacket.281(%rip), %ymm1           #77.3
        xorl      %eax, %eax                                    #77.3
        vmovupd   .L_2il0floatpacket.280(%rip), %ymm0           #77.3
        xorl      %ecx, %ecx                                    #77.3
                                # LOE rax rbx r12 r13 r14 r15 ecx ymm0 ymm1
..B1.102:                       # Preds ..B1.104 ..B1.197
        vmovupd   416(%rsp,%rax,8), %xmm4                       #78.22
        vmovupd   544(%rsp,%rax,8), %xmm3                       #78.30
        vmovupd   288(%rsp,%rax,8), %xmm2                       #78.4
        vmovupd   160(%rsp,%rax,8), %xmm5                       #78.39
        movl      %ecx, %edx                                    #75.2
        vinsertf128 $1, 432(%rsp,%rax,8), %ymm4, %ymm6          #78.22
        vmulpd    %ymm6, %ymm0, %ymm7                           #78.30
        vinsertf128 $1, 560(%rsp,%rax,8), %ymm3, %ymm8          #78.30
        vinsertf128 $1, 304(%rsp,%rax,8), %ymm2, %ymm4          #78.4
        vinsertf128 $1, 176(%rsp,%rax,8), %ymm5, %ymm3          #78.39
        vmulpd    %ymm8, %ymm7, %ymm2                           #78.30
                                # LOE rax rbx r12 r13 r14 r15 edx ecx ymm0 ymm1 ymm2 ymm3 ymm4
..B1.103:                       # Preds ..B1.103 ..B1.102
        vaddpd    %ymm3, %ymm2, %ymm3                           #78.39
        incl      %edx                                          #75.2
        vaddpd    %ymm3, %ymm4, %ymm4                           #78.4
        vmulpd    %ymm4, %ymm1, %ymm3                           #79.25
        cmpl      $100000000, %edx                              #75.2
        jb        ..B1.103      # Prob 93%                      #75.2
                                # LOE rax rbx r12 r13 r14 r15 edx ecx ymm0 ymm1 ymm2 ymm3 ymm4
..B1.104:                       # Preds ..B1.103
        vmovupd   %xmm3, 160(%rsp,%rax,8)                       #79.4
        vmovupd   %xmm4, 288(%rsp,%rax,8)                       #78.4
        vextractf128 $1, %ymm3, 176(%rsp,%rax,8)                #79.4
        vextractf128 $1, %ymm4, 304(%rsp,%rax,8)                #78.4
        addq      $4, %rax                                      #77.3
        cmpq      $16, %rax                                     #77.3
        jb        ..B1.102      # Prob 100%                     #77.3
                                # LOE rax rbx r12 r13 r14 r15 ecx ymm0 ymm1
..B1.105:                       # Preds ..B1.104
# Begin ASM
# #end scalar
# End ASM
                                # LOE rbx r12 r13 r14 r15
..B1.199:                       # Preds ..B1.105
        vzeroupper                                              #85.8
..___tag_value_main.164:                                        #85.8
        call      _ZNSt6chrono3_V212system_clock3nowEv          #85.8
..___tag_value_main.165:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.198:                       # Preds ..B1.199
        movq      %rax, 40(%rsp)                                #85.8
                                # LOE rbx r12 r13 r14 r15
..B1.106:                       # Preds ..B1.198
        movq      40(%rsp), %rax                                #86.50
        movl      $.L_2__STRING.6, %esi                         #88.11
        movq      16(%rsp), %rdx                                #86.54
        movl      $_ZSt4cout, %edi                              #88.11
        movq      %rax, 32(%rsp)                                #86.50
        movq      %rdx, 24(%rsp)                                #86.54
..___tag_value_main.166:                                        #88.11
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.11
..___tag_value_main.167:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.200:                       # Preds ..B1.106
        movq      %rax, %rdi                                    #88.11
                                # LOE rbx rdi r12 r13 r14 r15
..B1.107:                       # Preds ..B1.200
        movq      32(%rsp), %rax                                #88.41
        vxorpd    %xmm0, %xmm0, %xmm0                           #88.41
        subq      24(%rsp), %rax                                #88.41
        vcvtsi2sdq %rax, %xmm0, %xmm0                           #88.41
        vdivsd    .L_2il0floatpacket.282(%rip), %xmm0, %xmm0    #88.41
..___tag_value_main.168:                                        #88.41
        call      _ZNSolsEd                                     #88.41
..___tag_value_main.169:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.108:                       # Preds ..B1.107
        movq      %rax, %rdi                                    #88.67
        movl      $.L_2__STRING.5, %esi                         #88.67
..___tag_value_main.170:                                        #88.67
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #88.67
..___tag_value_main.171:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.109:                       # Preds ..B1.108
        movq      %rax, %rdi                                    #88.73
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #88.73
..___tag_value_main.172:                                        #88.73
        call      _ZNSolsEPFRSoS_E                              #88.73
..___tag_value_main.173:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.110:                       # Preds ..B1.109
        xorl      %edx, %edx                                    #91.2
        movl      $.L_2__STRING.7, %esi                         #91.2
        movq      %r12, 8(%rsp)                                 #91.2
..___tag_value_main.174:                                        #
        movq      %rsi, %r12                                    #91.2
        movq      %r13, (%rsp)                                  #91.2
..___tag_value_main.175:                                        #
        movq      %rdx, %r13                                    #91.2
                                # LOE rbx r12 r13 r14 r15
..B1.111:                       # Preds ..B1.115 ..B1.110
        movl      $_ZSt4cout, %edi                              #92.12
        vmovsd    288(%rsp,%r13,8), %xmm0                       #92.12
..___tag_value_main.176:                                        #92.12
        call      _ZNSolsEd                                     #92.12
..___tag_value_main.177:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.112:                       # Preds ..B1.111
        movq      %rax, %rdi                                    #92.18
        movq      %r12, %rsi                                    #92.18
..___tag_value_main.178:                                        #92.18
        call      _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc #92.18
..___tag_value_main.179:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.113:                       # Preds ..B1.112
        movq      %rax, %rdi                                    #92.24
        vmovsd    160(%rsp,%r13,8), %xmm0                       #92.24
..___tag_value_main.180:                                        #92.24
        call      _ZNSolsEd                                     #92.24
..___tag_value_main.181:                                        #
                                # LOE rax rbx r12 r13 r14 r15
..B1.114:                       # Preds ..B1.113
        movq      %rax, %rdi                                    #92.31
        movl      $_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi #92.31
..___tag_value_main.182:                                        #92.31
        call      _ZNSolsEPFRSoS_E                              #92.31
..___tag_value_main.183:                                        #
                                # LOE rbx r12 r13 r14 r15
..B1.115:                       # Preds ..B1.114
        incq      %r13                                          #91.2
        cmpq      $16, %r13                                     #91.2
        jb        ..B1.111      # Prob 50%                      #91.2
                                # LOE rbx r12 r13 r14 r15
..B1.116:                       # Preds ..B1.115
        movq      8(%rsp), %r12                                 #
..___tag_value_main.184:                                        #
        xorl      %eax, %eax                                    #96.9
        movq      (%rsp), %r13                                  #
..___tag_value_main.185:                                        #
        movq      %rbp, %rsp                                    #96.9
        popq      %rbp                                          #96.9
..___tag_value_main.186:                                        #
        ret                                                     #96.9
        .align    16,0x90
..___tag_value_main.188:                                        #
                                # LOE
# mark_end;
	.type	main,@function
	.size	main,.-main
	.section .rodata, "a"
	.align 32
	.align 32
d0_.15840.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d1_.15840.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d2_.15840.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d0.15840.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d1.15840.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d2.15840.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d0.16534.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d1.16534.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.align 32
d2.16534.0.0.38:
	.long	0x00000000,0x3ff00000
	.long	0x00000000,0x40000000
	.long	0x00000000,0x40080000
	.long	0x00000000,0x40100000
	.long	0x00000000,0x40140000
	.long	0x00000000,0x40180000
	.long	0x00000000,0x401c0000
	.long	0x00000000,0x40200000
	.long	0x00000000,0x40220000
	.long	0x00000000,0x40240000
	.long	0x00000000,0x40260000
	.long	0x00000000,0x40280000
	.long	0x00000000,0x402a0000
	.long	0x00000000,0x402c0000
	.long	0x00000000,0x402e0000
	.long	0x00000000,0x40300000
	.data
# -- End  main
	.section .text._ZNSt11char_traitsIcE6lengthEPKc, "xaG",@progbits,_ZNSt11char_traitsIcE6lengthEPKc,comdat
..TXTST1:
# -- Begin  _ZNSt11char_traitsIcE6lengthEPKc
# mark_begin;
       .align    16,0x90
	.weak _ZNSt11char_traitsIcE6lengthEPKc
_ZNSt11char_traitsIcE6lengthEPKc:
# parameter 1: %rdi
..B2.1:                         # Preds ..B2.0
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.189:            #259.7
        pushq     %rsi                                          #259.7
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.191:            #
        movq      %rdi, %rdx                                    #259.16
        movq      %rdx, %rcx                                    #259.16
        andq      $-16, %rdx                                    #259.16
        vpxor     %xmm0, %xmm0, %xmm0                           #259.16
        vpcmpeqb  (%rdx), %xmm0, %xmm0                          #259.16
        vpmovmskb %xmm0, %eax                                   #259.16
        andl      $15, %ecx                                     #259.16
        shrl      %cl, %eax                                     #259.16
        bsf       %eax, %eax                                    #259.16
        jne       ..L192        # Prob 60%                      #259.16
        movq      %rdx, %rax                                    #259.16
        addq      %rcx, %rdx                                    #259.16
        call      __intel_sse4_strlen                           #259.16
..L192:                                                         #
                                # LOE rax rbx rbp r12 r13 r14 r15
..B2.4:                         # Preds ..B2.1
        vzeroupper                                              #259.16
        popq      %rcx                                          #259.16
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.193:            #
        ret                                                     #259.16
        .align    16,0x90
..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.194:            #
                                # LOE
# mark_end;
	.type	_ZNSt11char_traitsIcE6lengthEPKc,@function
	.size	_ZNSt11char_traitsIcE6lengthEPKc,.-_ZNSt11char_traitsIcE6lengthEPKc
	.data
# -- End  _ZNSt11char_traitsIcE6lengthEPKc
	.text
# -- Begin  __sti__$E
# mark_begin;
       .align    16,0x90
__sti__$E:
..B3.1:                         # Preds ..B3.0
..___tag_value___sti__$E.195:                                   #
        pushq     %rsi                                          #
..___tag_value___sti__$E.197:                                   #
        movl      $_ZN34_INTERNAL_12_timer_16_cpp_11b8ba7cSt8__ioinitE, %edi #74.25
..___tag_value___sti__$E.198:                                   #74.25
        call      _ZNSt8ios_base4InitC1Ev                       #74.25
..___tag_value___sti__$E.199:                                   #
                                # LOE rbx rbp r12 r13 r14 r15
..B3.2:                         # Preds ..B3.1
        movl      $_ZNSt8ios_base4InitD1Ev, %edi                #74.25
        movl      $_ZN34_INTERNAL_12_timer_16_cpp_11b8ba7cSt8__ioinitE, %esi #74.25
        movl      $__dso_handle, %edx                           #74.25
        addq      $8, %rsp                                      #74.25
..___tag_value___sti__$E.200:                                   #
        jmp       __cxa_atexit                                  #74.25
        .align    16,0x90
..___tag_value___sti__$E.201:                                   #
                                # LOE
# mark_end;
	.type	__sti__$E,@function
	.size	__sti__$E,.-__sti__$E
	.data
# -- End  __sti__$E
	.bss
	.align 8
	.align 8
__$U3.0.19:
	.type	__$U3.0.19,@object
	.size	__$U3.0.19,8
	.space 8	# pad
	.align 1
_ZN34_INTERNAL_12_timer_16_cpp_11b8ba7cSt8__ioinitE:
	.type	_ZN34_INTERNAL_12_timer_16_cpp_11b8ba7cSt8__ioinitE,@object
	.size	_ZN34_INTERNAL_12_timer_16_cpp_11b8ba7cSt8__ioinitE,1
	.space 1	# pad
	.section .rodata, "a"
	.align 32
.L_2il0floatpacket.280:
	.long	0xa0b5ed8d,0x3eb0c6f7,0xa0b5ed8d,0x3eb0c6f7,0xa0b5ed8d,0x3eb0c6f7,0xa0b5ed8d,0x3eb0c6f7
	.type	.L_2il0floatpacket.280,@object
	.size	.L_2il0floatpacket.280,32
	.align 32
.L_2il0floatpacket.281:
	.long	0xe2308c3a,0x3e45798e,0xe2308c3a,0x3e45798e,0xe2308c3a,0x3e45798e,0xe2308c3a,0x3e45798e
	.type	.L_2il0floatpacket.281,@object
	.size	.L_2il0floatpacket.281,32
	.align 8
.L_2il0floatpacket.282:
	.long	0x00000000,0x41cdcd65
	.type	.L_2il0floatpacket.282,@object
	.size	.L_2il0floatpacket.282,8
	.section .rodata.str1.4, "aMS",@progbits,1
	.align 4
	.align 4
.L_2__STRING.3:
	.long	1953719668
	.long	543649385
	.long	1952671094
	.long	1814065775
	.long	1952935525
	.long	1718558824
	.long	2105402
	.type	.L_2__STRING.3,@object
	.size	.L_2__STRING.3,28
	.align 4
.L_2__STRING.4:
	.long	1935764581
	.long	1684370288
	.long	1835627552
	.long	1702240357
	.long	1919906915
	.word	8250
	.byte	0
	.type	.L_2__STRING.4,@object
	.size	.L_2__STRING.4,23
	.space 1, 0x00 	# pad
	.align 4
.L_2__STRING.5:
	.word	29472
	.byte	0
	.type	.L_2__STRING.5,@object
	.size	.L_2__STRING.5,3
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
.L_2__STRING.6:
	.long	1935764581
	.long	1684370288
	.long	1835627552
	.long	1869488229
	.long	1667593838
	.long	980578164
	.word	32
	.type	.L_2__STRING.6,@object
	.size	.L_2__STRING.6,26
	.space 2, 0x00 	# pad
	.align 4
.L_2__STRING.7:
	.word	8224
	.byte	0
	.type	.L_2__STRING.7,@object
	.size	.L_2__STRING.7,3
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
	.4byte 0x0000006c
	.4byte 0x00000024
	.8byte ..___tag_value_main.1
	.8byte ..___tag_value_main.188-..___tag_value_main.1
	.2byte 0x0400
	.4byte ..___tag_value_main.3-..___tag_value_main.1
	.2byte 0x100e
	.byte 0x04
	.4byte ..___tag_value_main.4-..___tag_value_main.3
	.4byte 0x8610060c
	.2byte 0x0402
	.4byte ..___tag_value_main.174-..___tag_value_main.4
	.8byte 0xff800d1c380e0c10
	.8byte 0xfffff9880d1affff
	.2byte 0x0422
	.4byte ..___tag_value_main.175-..___tag_value_main.174
	.8byte 0xff800d1c380e0d10
	.8byte 0xfffff9800d1affff
	.2byte 0x0422
	.4byte ..___tag_value_main.184-..___tag_value_main.175
	.2byte 0x04cc
	.4byte ..___tag_value_main.185-..___tag_value_main.184
	.2byte 0x04cd
	.4byte ..___tag_value_main.186-..___tag_value_main.185
	.8byte 0x00000000c608070c
	.byte 0x00
	.4byte 0x00000024
	.4byte 0x00000094
	.8byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.189
	.8byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.194-..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.189
	.2byte 0x0400
	.4byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.191-..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.189
	.2byte 0x100e
	.byte 0x04
	.4byte ..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.193-..___tag_value__ZNSt11char_traitsIcE6lengthEPKc.191
	.2byte 0x080e
	.byte 0x00
	.4byte 0x00000024
	.4byte 0x000000bc
	.8byte ..___tag_value___sti__$E.195
	.8byte ..___tag_value___sti__$E.201-..___tag_value___sti__$E.195
	.2byte 0x0400
	.4byte ..___tag_value___sti__$E.197-..___tag_value___sti__$E.195
	.2byte 0x100e
	.byte 0x04
	.4byte ..___tag_value___sti__$E.200-..___tag_value___sti__$E.197
	.2byte 0x080e
	.byte 0x00
# End
