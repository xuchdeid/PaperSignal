/*
Copyright 2017 Google LLC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. 
*/

/* WiFi Network must be 2.4GHz */
const String SSID = "YOUR_WIFI_NETWORK"; 
const String Password = "YOUR_WIFI_PASSWORD";

/* Your Signal ID should be lowercase, and each word should be separated by dashes. 
If Google Assistant spoke too quickly, you can ask to repeat the identifier at any 
time be saying "What is the setup code for [SIGNAL NAME]?" */
const String SignalID = "your-signal-id";

/* Enter the below API keys to track the weather on Umbrella Signal and Pants Signal. */
const String DarkSkyAPIKey = "YOUR_DARK_SKY_API_KEY";
const String GeoCodingAPiKey = "YOUR_GEOCODING_API_KEY";

/* Enter the below API key to track stocks on Arrow Signal. */
const String BarChartAPIKey = "YOUR_BAR_CHART_API_KEY";

const String TestJson = "{\"name\":\"Countdown Signal\",\"result\":{\"metadata\":{\"intentId\":\"2b3256e9-4258-4718-9375-70c07704bc0e\",\"intentName\":\"Timer\",\"matchedParameters\":[{\"dataType\":\"@sys.duration\",\"isList\":false,\"name\":\"duration\",\"required\":false,\"value\":\"$duration\"}],\"nluResponseTime\":154,\"webhookForSlotFillingUsed\":\"false\",\"webhookUsed\":\"true\"},\"parameters\":{\"duration\":{\"amount\":30,\"unit\":\"s\"},\"signal\":\"useModifying\"},\"resolvedQuery\":\"set a timer for 30 seconds\",\"timestamp\":\"2017-12-04T15:27:39.01Z\"},\"verifiedWorking\":true}";

