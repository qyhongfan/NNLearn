//
//  NNView.h
//  MVVMDemo
//
//  Created by liupengkun on 2018/7/16.
//  Copyright © 2018年 以梦为马. All rights reserved.
//

#import <UIKit/UIKit.h>
@class NNViewModel;

@interface NNView : UIView

- (instancetype)initWithFrame:(CGRect)frame viewModel:(NNViewModel *)viewModel;

@end
