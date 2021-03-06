//
//  EventExpandedCell.h
//  Rapporr
//
//  Created by Rapporr-Dev-MUS on 6/3/17.
//  Copyright © 2017 Rapporr. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol EventExpandedCellDelegate <NSObject>
-(void)didTranslateMessagePressed:(RPConverstionMessage *)message atIndexPath:(NSIndexPath *)indexPath;
-(void)didShowMessageDetailsPressed:(RPConverstionMessage *)message;
-(void)didMakeCallPressed:(RPConverstionMessage *)message;
@end

@interface EventExpandedCell : UITableViewCell
@property (weak, nonatomic) id<EventExpandedCellDelegate>delegate;

@property (strong, nonatomic) IBOutlet UIView *bottomView;

@property (strong, nonatomic) IBOutlet AsyncImageView *downArrowImg;
@property (strong, nonatomic) IBOutlet UIView *sepratorView;
@property (strong, nonatomic) IBOutlet UIView *blueBar;
@property (strong, nonatomic) IBOutlet UIView *orangeBar;
@property (strong, nonatomic) IBOutlet UIView *topView;

@property (strong, nonatomic) IBOutlet UILabel *dateLbl;
@property (strong, nonatomic) IBOutlet UILabel *headerTitle;


@property (strong, nonatomic) IBOutlet UILabel *announcementTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblMessage;

@property (strong, nonatomic) IBOutlet UILabel *eventTitle;
@property (strong, nonatomic) IBOutlet UILabel *eventPlaceLbl;

@property (strong, nonatomic) IBOutlet UILabel *dayLbl;
@property (strong, nonatomic) IBOutlet UILabel *timeLbl;

@property (weak, nonatomic) IBOutlet AsyncImageView *imgViewMessageStatus;
@property (weak, nonatomic) IBOutlet CircleProgressBar *seenByProgress;
@property (strong, nonatomic) IBOutlet UILabel *seenByLbl;

@property (strong, nonatomic) RPConverstionMessage *message;
@property (strong, nonatomic) MessageModel *conversation;
@property (assign, nonatomic) NSIndexPath *indexPath;


- (void) customizeCell : (RPConverstionMessage*)message andIndexPath :(NSIndexPath*)indexPath andTimeStr : (NSString*)string;


@end
