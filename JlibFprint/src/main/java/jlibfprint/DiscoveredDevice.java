package jlibfprint;

/**
 *
 * @author eduardo
 */
public class DiscoveredDevice {

    private long internalPointer;
    private DiscoveredDeviceList sourceList;
    private Driver driver;
    
    public native int getType();
    
    public native int getDriverId();

    public Driver getDriver() {
        if (driver == null) {
            driver = nativeGetDriver();
        }
        return driver;
    }

    private native Driver nativeGetDriver();

}
