//
//  ZZStreamLoadHud.h
//  ZZStreamPlayer
//
//  Created by 袁亮 on 16/4/18.
//  Copyright © 2016年 Migic_Z. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZZStreamLoadHud : UIView

+(ZZStreamLoadHud *) sharedHud;

-(void) showHudInView:(UIView *)view;

-(void)hideHidInView;
@end
