//
//  DBYInputView.h
//  dbyuu
//
//  Created by 张永杰 on 16/8/3.
//  Copyright © 2016年 duobaoyuu. All rights reserved.
//  文本输入框统一调用

//// 1.账号文本框
//self.m_accountView = [[DBYInputView alloc] initWithInputType:DBYInformationType LeftLabel:@"账 号" plachorStr:@"请输入手机号码"];
//// 设置键盘类型
//[self.m_accountView setInputtextFileType:UIKeyboardTypePhonePad];
//[self.view addSubview:_m_accountView];
//[_m_accountView mas_makeConstraints:^(MASConstraintMaker *make) {
//    make.left.right.equalTo(self.view);
//    make.top.equalTo(self.view.mas_top).offset(15);
//    make.height.mas_equalTo(42.5);
//}];
////[self.m_accountView addLineViewIsInHead:YES isAlignmentToLeftLabel:NO];
//[self.m_accountView addLineViewIsInHead:NO isAlignmentToLeftLabel:NO];
//
//// 2.密码文本框
//self.m_pwdView = [[DBYInputView alloc] initWithInputType:DBYInformationType LeftLabel:@"密 码" plachorStr:@"请输入密码"];
//// 非明文显示
//self.m_pwdView.inputTextField.secureTextEntry = YES;
//[self.view addSubview:_m_pwdView];
//[_m_pwdView mas_makeConstraints:^(MASConstraintMaker *make) {
//    make.left.right.equalTo(self.view);
//    make.top.equalTo(self.m_accountView.mas_bottom);
//    make.height.mas_equalTo(42.5);
//}];
//[self.m_pwdView addLineViewIsInHead:NO isAlignmentToLeftLabel:NO];


typedef enum{
    DBYInformationType,
    DBYVerificationCodeType,
    DBYPasswordType
} DBYInputType;
#import <UIKit/UIKit.h>

@interface DBYInputView : UIView
@property (nonatomic, strong)UILabel        *leftLabel;
@property (nonatomic, strong)UITextField    *inputTextField;
@property (nonatomic, strong)UIButton       *verifiCodeBtn;

/**
 *  创建只有输入框的视图
 *
 *  @return 
 */
- (instancetype)initOnlyTextFieldPlachorStr:(NSString *)plaStr;

/**
 *  初始化
 *
 *  @param inputType 输入类型
 *  @param leftStr   左边标题
 *  @param plachorStr默认输入
 *
 *  @return 
 */
- (instancetype)initWithInputType:(DBYInputType)inputType LeftLabel:(NSString *)leftStr plachorStr:(NSString *)plaStr;
/**
 *  设置键盘类型
 *
 *  @param keyboardType 
 */
- (void)setInputtextFileType:(UIKeyboardType)keyboardType;

/**
 *  添加底部线条
 *  @param isInHead    是否在顶部
 *  @param isAlignment 是否和label左对齐
 */
- (void)addLineViewIsInHead:(BOOL)isInHead isAlignmentToLeftLabel:(BOOL)isAlignment;
@end
