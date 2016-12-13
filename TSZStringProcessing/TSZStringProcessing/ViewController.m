//
//  ViewController.m
//  TSZStringProcessing
//
//  Created by tang on 16/12/13.
//  Copyright © 2016年 TangFeng. All rights reserved.
//

#import "ViewController.h"
#import "YYText/YYText.h"
#import "TSZUitils.h"

@interface ViewController ()

@property (nonatomic, strong) YYLabel *label;


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self moreLabel];
    
    [self setUIYYLabel];
    
}

#pragma mark - 字符的处理

- (void)moreLabel{
    
    NSMutableAttributedString *text = [NSMutableAttributedString new];
    NSString *title = @"This is UIImage attachment This is UIImage attachment This is UIImage attachment This is UIImage attachment This is UIImage attachment";
    [text appendAttributedString:[[NSAttributedString alloc] initWithString:title attributes:nil]];
    
   
    
    //_descLabel.attributedText = text;
    
    UIFont *font = [UIFont systemFontOfSize:18.0];
    
    UIButton *moreButton = [UIButton buttonWithType:UIButtonTypeCustom];
    moreButton.frame = CGRectMake(0, 0, 60, 12);

    
    moreButton.titleLabel.font = font;
    
   // [moreButton.titleLabel sizeToFit];
    [moreButton setTitle:@"Colse" forState:UIControlStateNormal];
    
    [moreButton setTitleColor:[UIColor blueColor] forState:UIControlStateNormal];
    
    [moreButton addTarget:self action:@selector(closeLabel) forControlEvents:UIControlEventTouchUpInside];
    
    NSMutableAttributedString *attachText = [NSMutableAttributedString yy_attachmentStringWithContent:moreButton contentMode:UIViewContentModeCenter attachmentSize:moreButton.bounds.size alignToFont:font alignment:YYTextVerticalAlignmentCenter];
    
    [text appendAttributedString:attachText];
    
    text.yy_font = font;
    _label = [YYLabel new];
    _label.userInteractionEnabled = YES;
    _label.numberOfLines = 0;
    _label.textVerticalAlignment = YYTextVerticalAlignmentTop;
    _label.tsz_size = CGSizeMake(TSZSystemScreenWidth - 24, 36);

    _label.tsz_top  =  20;
    _label.tsz_left  = 12;
    _label.attributedText = text;
    
     NSMutableAttributedString *textMore = [[NSMutableAttributedString alloc] initWithString:@"...More"];
    
    YYTextHighlight *hi = [YYTextHighlight new];
    [hi setColor:[UIColor blueColor]];
   
    hi.tapAction = ^(UIView *containerView, NSAttributedString *textxx, NSRange range, CGRect rect) {
       // YYLabel *label = self.label;
        
        _label.tsz_height = [self heightForAttributeText:text maxWidth:TSZSystemScreenWidth - 24];
        
        
    };
    
    [textMore yy_setColor:[UIColor blueColor] range:[textMore.string rangeOfString:@"More"]];
    
    [textMore yy_setTextHighlight:hi range:[textMore.string rangeOfString:@"More"]];
    
    textMore.yy_font = _label.font;
    
    
    YYLabel *seeMore = [YYLabel new];
    
    seeMore.attributedText = textMore;
   [seeMore sizeToFit];
    
    NSAttributedString *truncationToken = [NSAttributedString yy_attachmentStringWithContent:seeMore contentMode:UIViewContentModeCenter attachmentSize:seeMore.tsz_size alignToFont:text.yy_font alignment:YYTextVerticalAlignmentCenter];
    
    _label.truncationToken = truncationToken;
    
    [self.view addSubview:self.label];
}


- (void)setUIYYLabel{
    
    YYLabel *label = [[YYLabel alloc] init];
    //label.tsz_height = 100;
    label.tsz_width = TSZSystemScreenWidth  - 24;
    label.tsz_centerY = self.view.tsz_centerY;
    label.tsz_centerX = self.view.tsz_centerX;
    label.textColor = [UIColor redColor];
    label.numberOfLines = 0;
    label.textVerticalAlignment = YYTextVerticalAlignmentTop;
    //label.text = @"你是一只大灰狼";
    
    [self.view addSubview:label];
    
    // 1. 创建一个属性文本
    NSMutableAttributedString *text = [[NSMutableAttributedString alloc] initWithString:@"你是一只大灰狼 , 我是一只小白兔 你是一只大灰lang"];
    
    
    [label.textParser parseText:text selectedRange:NULL];
    
    
    
    // 2. 为文本设置属性
    text.yy_font = [UIFont systemFontOfSize:16.0];
    text.yy_color = [UIColor blueColor];
    [text yy_setColor:[UIColor redColor] range:NSMakeRange(0, 4)];
    //text.yy_lineSpacing = 2;
    
    [text yy_setTextHighlightRange:NSMakeRange(6, 9) color:[UIColor greenColor] backgroundColor:nil tapAction:^(UIView * _Nonnull containerView, NSAttributedString * _Nonnull text, NSRange range, CGRect rect) {
       
        NSLog(@"你点击了我");
        
    }];
    
    YYTextContainer *container = [YYTextContainer new];
    container.size = CGSizeMake(TSZSystemScreenWidth - 24, CGFLOAT_MAX);
    container.linePositionModifier = label.linePositionModifier;
    container.insets = label.textContainerInset;
    container.maximumNumberOfRows = label.numberOfLines;
    
    YYTextLayout *layout = [YYTextLayout layoutWithContainer:container text:text];
    CGSize size = layout.textBoundingSize;
    
    
    
//    label.tsz_height = [self heightForAttributeText:text maxWidth:TSZSystemScreenWidth - 24];
    label.backgroundColor = [UIColor grayColor];
    label.tsz_height = size.height;
    
    label.attributedText = text;
    
}

- (CGFloat)heightForAttributeText:(NSAttributedString *)attributeText maxWidth:(CGFloat)maxWidth{
    YYTextContainer *container = [YYTextContainer new];
    container.size = CGSizeMake(maxWidth, CGFLOAT_MAX);
    container.maximumNumberOfRows = 0;
    YYTextLayout *layout = [YYTextLayout layoutWithContainer:container text:attributeText];
    return layout.textBoundingSize.height;
}


- (void)closeLabel{
    
     _label.tsz_size = CGSizeMake(TSZSystemScreenWidth - 24, 36);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
