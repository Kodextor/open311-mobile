/**
 * @copyright 2011-2012 City of Bloomington, Indiana. All Rights Reserved
 * @author Cliff Ingham <inghamn@bloomington.in.gov>
 * @license http://www.gnu.org/licenses/gpl.txt GNU/GPLv3, see LICENSE.txt
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 */

#import <UIKit/UIKit.h>

@interface BaseFieldViewController : UIViewController {

    IBOutlet UILabel *label;
}
@property (nonatomic, retain) NSString *fieldname;
@property (nonatomic, retain) NSString *previousText;
@property (nonatomic, retain) NSMutableDictionary *reportForm;
@property (nonatomic, retain) NSDictionary *entry;

- (id)initWithReportFormEntry:(NSDictionary *)reportEntry report:(NSMutableDictionary *)report;
- (void)cancel;
- (void)done;

+ (void)resizeFontForLabel:(UILabel*)aLabel maxSize:(int)maxSize minSize:(int)minSize;

@end