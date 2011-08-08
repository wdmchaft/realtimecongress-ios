#import <UIKit/UIKit.h>
#import "JSONKit.h"
#import "SunlightLabsConnection.h"
#import "Reachability.h"

#define REQUEST_PAGE_SIZE @"100"

@interface WhipNoticeViewController : UITableViewController {
    @private
    NSArray *parsedWhipNoticeData;
    UIActivityIndicatorView *loadingIndicator;
    NSMutableDictionary *noticeDaysDictionary;
    NSArray *sectionDataArray;
    NSMutableArray *noticeDaysArray;
    SunlightLabsConnection *connection;
    Reachability *reachabilityInfo;
}

@property(nonatomic,retain) NSArray *parsedWhipNoticeData;
@property(nonatomic,retain) UIActivityIndicatorView *loadingIndicator;;
@property(nonatomic,retain) NSMutableDictionary *noticeDaysDictionary;
@property(nonatomic,retain) NSArray *sectionDataArray;
@property(nonatomic,retain) NSMutableArray *noticeDaysArray;
@property(nonatomic, retain) Reachability *reachabilityInfo;


- (void) refresh;
- (void) parseData: (NSNotification *)notification;
- (void) parseCachedData: (NSData *) data;
- (void) retrieveData;

@end
